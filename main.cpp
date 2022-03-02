#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task A\n";
  std::cout << "-----------------------------------\n";
  std::cout << "isDivisibleBy(100, 25) returns: ";
  if (isDivisibleBy(100, 25) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }
  std::cout << "isDivisibleBy(35, 17) returns: ";
  if (isDivisibleBy(35, 17) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }
  
  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task B\n";
  std::cout << "-----------------------------------\n";
  std::cout << "isPrime(-1) returns: ";
  if (isPrime(-1) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isPrime(2) returns: ";
  if (isPrime(2) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isPrime(23) returns: ";
  if (isPrime(23) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isPrime(25) returns: ";
  if (isPrime(25) == 1)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task C\n";
  std::cout << "-----------------------------------\n";
  std::cout << "nextPrime(-10) returns: " << nextPrime(-10) << "\n\n";
  std::cout << "nextPrime(14) returns: " << nextPrime(14) << "\n\n";
  std::cout << "nextPrime(17) returns: " << nextPrime(17) << "\n\n";

  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task D\n";
  std::cout << "-----------------------------------\n";
  std::cout << "countPrimes(-5, 30) returns: " << countPrimes(-5, 30) << "\n\n";
  std::cout << "countPrimes(15, 16) returns: " << countPrimes(15, 16) << "\n\n";
  std::cout << "countPrimes(17, 17) returns: " << countPrimes(17, 17) << "\n\n";
  std::cout << "countPrimes(1, 100) returns: " << countPrimes(1, 100) << "\n\n";

  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task E\n";
  std::cout << "-----------------------------------\n";
  std::cout << "isTwinPrime(-10) returns: ";
  if (isTwinPrime(-10) == true)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isTwinPrime(7) returns: ";
  if (isTwinPrime(7) == true)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isTwinPrime(17) returns: ";
  if (isTwinPrime(17) == true)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "isTwinPrime(25) returns: ";
  if (isTwinPrime(25) == true)
  {
    std::cout << "true" << "\n\n";
  }
  else 
  {
    std::cout << "false" << "\n\n";
  }

  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task F\n";
  std::cout << "-----------------------------------\n";
  std::cout << "nextTwinPrime(-10) returns: " << nextTwinPrime(-10) << "\n\n";
  std::cout << "nextTwinPrime(7) returns: " << nextTwinPrime(7) << "\n\n";
  std::cout << "nextTwinPrime(17) returns: " << nextTwinPrime(17) << "\n\n";
  std::cout << "nextTwinPrime(25) returns: " << nextTwinPrime(25) << "\n\n";

  std::cout << "-----------------------------------\n";
  std::cout << "Tests for task G\n";
  std::cout << "-----------------------------------\n";
  std::cout << "largestTwinPrime(5, 18) returns: " << largestTwinPrime(5, 18) << "\n\n";
  std::cout << "largestTwinPrime(1, 31) returns: " << largestTwinPrime(1, 31) << "\n\n";
  std::cout << "largestTwinPrime(14, 16) returns: " << largestTwinPrime(14, 16) << "\n\n";

  return 0;
}