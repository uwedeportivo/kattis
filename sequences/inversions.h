//
// Created by Uwe Hoffmann on 11/7/21.
//

#ifndef SEQUENCES_INVERSIONS_H
#define SEQUENCES_INVERSIONS_H

#include <istream>

constexpr std::size_t  kModulus = 1000000007;

std::size_t MulPow2Mod(std::size_t factor, std::size_t exponent, std::size_t modulo);
std::size_t Inversions(std::istream& is);

#endif //SEQUENCES_INVERSIONS_H
