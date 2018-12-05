// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
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
{   0, "3125c7364510de9e77c99978d47cbcf02c0006c1dd3d01d35467fdae3ba20d52"},
{   5000, "11d7624c6d854772075f60d47c4bfaa931089c79ceb40ea9c6798bd60226a88d"},
{   10000, "01de1b9ace46d18f8106ec53e9341e68e14dbeff415202021505593a54aedf85"},
{   15000, "e5cf9ba352aebc625931e408a798881cd717d6f27fed4c33d8367c73aebdbe9b"},
{   20000, "cdc5f17c029e07af6b3e200608e0a627d7395da0984e9611aef2243e2945695a"}
};
}
