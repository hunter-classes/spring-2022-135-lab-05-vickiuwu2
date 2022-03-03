#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

 TEST_CASE("Tests for isDivisbleBy function")
{
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
}

TEST_CASE("Tests for isPrime function")
{
    CHECK(isPrime(-1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(23) == true);
    CHECK(isPrime(25) == false);
}

TEST_CASE("Tests for nextPrime function")
{
    CHECK(nextPrime(-10) == 2);
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("Tests for countPrimes function")
{
    CHECK(countPrimes(-5, 30) == 10);
    CHECK(countPrimes(15,16) == 0);
    CHECK(countPrimes(17,17) == 1);
    CHECK(countPrimes(1,100) == 25);
}

TEST_CASE("Tests for isTwinPrime function")
{  
    CHECK(isTwinPrime(-10) == false);
    CHECK(isTwinPrime(7) == true);
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(25) == false);
}

TEST_CASE("Tests for nextTwinPrime function")
{
    CHECK(nextTwinPrime(-10) == 3);
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(17) == 19);
    CHECK(nextTwinPrime(25) == 29);
}

TEST_CASE("Tests for largestTwinPrime function")
{
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}