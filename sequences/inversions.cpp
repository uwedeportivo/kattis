//
// Created by Uwe Hoffmann on 11/7/21.
//

#include "inversions.h"

std::size_t MulPow2Mod(std::size_t factor, std::size_t exponent, std::size_t modulo) {
  std::size_t r = factor;

  while (exponent > 0) {
    r <<= 1;
    if (r >= modulo) {
      r -= modulo;
    }
    --exponent;
  }
  return r;
}

std::size_t Inversions(std::istream &is) {
  std::size_t f_2k = 0;
  std::size_t f_2k_minus_one = 0;
  std::size_t f_2k_minus_two = 0;
  std::size_t seen_ones = 0;
  std::size_t seen_qmarks = 0;
  char buffer[1024];

  do {
    is.read(buffer, 1024);
    for (std::size_t i = 0; i < is.gcount(); ++i) {
      if (buffer[i] == '1') {
        ++seen_ones;
      } else if (buffer[i] == '0') {
        f_2k += seen_ones;
        if (f_2k >= kModulus) {
          f_2k -= kModulus;
        }

        f_2k_minus_one += seen_qmarks;
        if (f_2k_minus_one >= kModulus) {
          f_2k_minus_one -= kModulus;
        }
      } else if (buffer[i] == '?') {
        f_2k_minus_one += seen_ones;
        if (f_2k_minus_one >= kModulus) {
          f_2k_minus_one -= kModulus;
        }

        f_2k_minus_two += seen_qmarks;
        if (f_2k_minus_two >= kModulus) {
          f_2k_minus_two -= kModulus;
        }

        ++seen_qmarks;
      }
    }

  } while (is.gcount() > 0);

  std::size_t k = seen_qmarks;

  std::size_t result = MulPow2Mod(f_2k, k, kModulus);
  if (result >= kModulus) {
    result -= kModulus;
  }

  if (k > 0) {
    result += MulPow2Mod(f_2k_minus_one, k - 1, kModulus);
    if (result >= kModulus) {
      result -= kModulus;
    }
  }

  if (k > 1) {
    result += MulPow2Mod(f_2k_minus_two, k - 2, kModulus);
    if (result >= kModulus) {
      result -= kModulus;
    }
  }
  return result;
}