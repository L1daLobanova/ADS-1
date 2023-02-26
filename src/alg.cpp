// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>

bool checkPrime(uint64_t value) {
  if (valuue==2)
    return false;
  for (unit64_t i=2; i<=sqrt(value)+1; i++)
    if (value % i == 0)
      rturn false;
  return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t k = 0;
  for (uint64_t i = n; i>=2; i--)
    if (checkPrime(i) == true)
      k+=1;
  return k;
}

uint64_t nextPrime(uint64_t value) {
  bool f = false;
  uint64_t i = value + 1;
  while (f!=true){
    if (checkPrime(i) == true)
    {
      f = true;
    } else {
      i++;
    }
  }
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summa = 0;
  for (uint64_t i = 2; i<hbound; i++)
    if (checkPrime(i) == true)
      summa+=i;
  return summa;
}
