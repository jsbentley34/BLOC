// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018, The TurtleCoin developers, The BLOC developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{      0, "acd5682403287ad25d94769adb80fbcd45de591ecfd5c86d5176bb9a10ff5baa"},
{   5000, "9474c4e9cceaa0590db12ab3aec16aa75608a9626fded74c5f77bee6e29eb20e"},
{   10000, "2e9dd1609e8b3d4266d924bd91db6e329fdfc796dc837bbd4b685ba97fd12280"},
{   15000, "7eaabd7accc631f74a46b7f3f1b94d3e52616c3c8418a9f622b7dc968ac5cd9c"},
{   20000, "0af44a47302857171c9b8410b4215214b1da833eb90c695d3aa2e544824d2471"},
{   25000, "238b42a3573ec43352a3aa9ee82c4b33e539a1ea29fa740e0a85c5bfbc974c33"},
{   30000, "6fd1c2960dc5c6c83f4864d690d124614f9d538ad7ac798276a30035e2f144da"},
{   35000, "65fcee298fbc2cc9297ee3ec60cd186296775b03074cafc21ef53dfaa91a31d8"},
{   40000, "f3470ae01eedc1456e7c41c57367cfd2e9fa29439e05aee1571532e18f75bfe4"},
{   45000, "014d3a57cfe8c55b198abc96464598261ce9a658a471c0bf2c864543056eed2d"},
{   50000, "49ed4e36995ff484963e32fe360cea1ba504d802bbe00f9fe2ff5266f70a9c2b"},
{   55000, "29fb42abbdb27ae3284b45fdcba976b45c4f3ddeb1f0779df2abd85370bc6df5"},
{   60000, "7f398b91508a52f821b23a8c614b39b29c0c499469843c7c43b793dcc10615ca"},
{   65000, "24c9cb23127315ff37fe671c8d193198e0fb3ec3da18879a5b1be4f89ceabe4e"},
{   70000, "43a4ed17f126b53156d332c326e2b5b75691138d1f2eb7f35f879ce444c77cc1"},
{   75000, "fda2c01388ba77cc77db93a9a490b5619c28e0ac86c2336ae9599672f3e3d598"},
{   80000, "281381b37cec73101c8b646caf002205ac3b76920f774aafb09df025166d55dd"},
{   85000, "5727b77b2a644945d4405c8fe0f2251827b7d1b4ee9acd5dc38f917ff01cb23f"},
{   90000, "5c63f3676e215eab0a6b77ddd3f2a46b8f3bddc934f6ef8596fd90f38824962f"},
{   95000, "808e9e42c9d69bc4124fd9ee5fc0b2f0c0016c54df15e1ff399acea2262ce548"},
{   100000, "e026316d0b95436a7d3d36247fc8adb5fcb342015eccc239b346a7e2fd64c262"},
{   105000, "5860a2b4516555202fb86402ec81e6dffdf9d324b5e757db17247810565f98dc"},
{   110000, "be2a474f6a2de7b855a7329256dc1056268e02d8d3844c6b9fc67195bfd82ccb"},
{   115000, "622fbdfa3de5a5797a225b1aa11f7d6b8e23a16b20a5f63048a0e2a1d9681cc6"},
{   120000, "f7ff98e74a49e4c1f377f3e74b758e5a666fd007ddaf8e28ff9524a38d0d3be1"},
{   125000, "ee04293cc69b2eff64a289626aab4d2474ce40a79163ee0712f4b531b89c22da"},
{   130000, "e2f555027a78675e7b174d55bf65f31cfdb51cd841cd8cf82bf8f9a15a577f1c"},
{   131214, "51807d967e9a26c6fc1286e25b1742907370ac19e484682125fcf49792c68bf1"},
{   131938, "ee7f170ed839628592b6cb6b319780f5da7e7d10e5563285c77520beb7e32f86"},
{   135000, "708c35534109a03f3b5cedbceabe091e98bf13ee82141c3b1ba463b1635df92b"},
{   140000, "909e01282ec2b06284d6f6418f1178feaf8cc29342249d56fb987445fca5f65f"},
{   145000, "575bfb49d5d0388237aa63dad8942bf6adfc06df3bde2152631043e2b3a13d08"},
{   150000, "f175a62a7832fc4b134a8e0b502e954a24934920a5565c1a3b5106bcff8280d1"},
{   155000, "86db28fa7f193663372eca653e1334dedd8bc6ae95441314a41ff58340e8160f"},
{   160000, "abd4c0be2a3a3c40592ccdc0a132ce93bfdfe1b2902eed310a1e3d95dca40678"},
{   165000, "24b5568c7f56b44cf8b2e31b7f198de5727e8e190a88db0abf070e638af5b527"},
{   170000, "6eb4a5321925cc3cc6ff664f9fd77528ba65e738c09306183fe617289a661474"},
{   175000, "8f3a4c219524b185da0f6544c827088a78adc57622d4f768a340fd2dda40d594"},
{   180000, "65713a149d0d9aed0ac9d4e7d0ae0a319eceb90da9e93af7d49921ebe8fa9cea"},
{   185000, "257f4428000573f3bffde44d8c78801db7d24f46c6805b799a8bce13220e245d"},
{   190000, "8e0133693e2224ef92eaf13528a904833e12e0f1c9df9aea70285c759f7cf2fe"},
{   195000, "2a726b2cac1d793aa8f1ca2e4d4703862b3d5f190fc54d24d0d6701a5b6158f4"},
{   200000, "4f59e89100534b4a8a8a1fc7dc9badf2fbfc5b155c0f15158278815bfa1b9bdd"},
{   205000, "632c23d090703c859971f914ee2d1516c033f99c498a8917717f7dd50a48d09a"},
{   210000, "c4a4553643eae86d0033517324f7bac4b238c4b6b4e2a2f2abe776325fa87af2"},
{   215000, "2ed6f61dcb3ab3c02b6c391faa2bb681da6ea672ace8090104d52851de61e5ea"},
{   220000, "1df36e103a7e6b8e86731ce5cd68f4fc318f7af4f89bffd804cd96d977f90f08"},
{   230000, "aff3b5d36449894e6951d4d3ef60d488540822908c09cef368b48d96e3a7c403"},
{   235000, "9d7eb99099aef2f7299f15f26e51265042a8807147c2ff0523a8564c1e8bd6cb"},
{   240000, "a705148dcbd2e34900e1a86ee41a81c24ccbf728ba47a477b6000ef149e1cc2c"}
};
}
