import requests
import ujson as json
import sys
import binascii

to_address = "abLocA4HEsaDXSJHLFMZW4LjQ1c2PExVbLHwq4GW6nZN3njc6LbgRZSKTzV9Jr8zDsC4q3FPg3emoCbsGxYz2i3XJzWzqkkKjrm"
content = """
IN BLOC WE TRUST
"""

def rpc(method, params={}):
    base_url = "http://localhost:8070/json_rpc"
    payload = {
        "password": "80085",
        "jsonrpc" : "2.0",
        "method" : method,
        "params" : params,
        "id" : "blah"
    }

    try:
        response = requests.post(base_url, data=json.dumps(payload)).json()
    except Exception as e:
        print("Doesn't seem like BLOC-service is running. {}".format(response))
        sys.exit(1)

    if 'error' in response:
        print("Failed to talk to server. {}".format(response))
        sys.exit(1)
    return response

r = rpc("sendTransaction", {
    "transfers": [{
        "amount": 10,
        "address": to_address,
    }],
    "fee": 1,
    "anonymity": 0,
    "extra": binascii.hexlify(content.encode()).decode()
})
print(r)
