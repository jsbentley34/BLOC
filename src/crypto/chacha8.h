// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018-2019, The BLOC.MONEY Developers
//
// Please see the included LICENSE file for more information.
// 
// BLOC is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// BLOC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with BLOC. If not, see <http://www.gnu.org/licenses/>.

#include <stdint.h>
#include <stddef.h>

#define CHACHA8_KEY_SIZE 32
#define CHACHA8_IV_SIZE 8

#if defined(__cplusplus)
#pragma once
#include <memory.h>
#include <string>

#include "hash.h"

namespace Crypto {
  extern "C" {
#endif
    void chacha8(const void* data, size_t length, const uint8_t* key, const uint8_t* iv, char* cipher);
#if defined(__cplusplus)
  }

#pragma pack(push, 1)
  struct chacha8_key {
    uint8_t data[CHACHA8_KEY_SIZE];
  };

  // MS VC 2012 doesn't interpret `class chacha8_iv` as POD in spite of [9.0.10], so it is a struct
  struct chacha8_iv {
    uint8_t data[CHACHA8_IV_SIZE];
  };
#pragma pack(pop)

  static_assert(sizeof(chacha8_key) == CHACHA8_KEY_SIZE && sizeof(chacha8_iv) == CHACHA8_IV_SIZE, "Invalid structure size");

  inline void chacha8(const void* data, size_t length, const chacha8_key& key, const chacha8_iv& iv, char* cipher) {
    chacha8(data, length, reinterpret_cast<const uint8_t*>(&key), reinterpret_cast<const uint8_t*>(&iv), cipher);
  }

   inline void generate_chacha8_key(Crypto::cn_pow_hash &context, const std::string& password, chacha8_key& key) {
    static_assert(sizeof(chacha8_key) <= sizeof(Hash), "Size of hash must be at least that of chacha8_key");
    Hash pwd_hash;
    context.hash(password.data(), password.size(), &pwd_hash);
    memcpy(&key, &pwd_hash, sizeof(key));
    memset(&pwd_hash, 0, sizeof(pwd_hash));
  }
}

#endif