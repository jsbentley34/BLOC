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
#include <vector>

#pragma once

#include <cstdint>
#include <vector>

#include "crypto/hash.h"

namespace CryptoNote {
    typedef std::uint64_t Difficulty;
    bool check_hash(const Crypto::Hash &hash, Difficulty difficulty);
    
}

uint64_t nextDifficultyV3(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties);

template <typename T>
T clamp(const T& n, const T& lower, const T& upper)
{
    return std::max(lower, std::min(n, upper));
}