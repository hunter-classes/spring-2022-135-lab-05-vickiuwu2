#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
    if (n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }    
    }
    return true;
}

int nextPrime(int n)
{   
    int next = n;
    bool result = false;
    while (result == false)
    {
        next++;
        if (isPrime(next) == true)
        {
            result = true;
        }
    }
    return next;
}

int countPrimes(int a, int b)
{
    int totalPrime = 0, count = a;
    while (count <= b)
    {
        if (isPrime(count) == true)
        {
            totalPrime++;
        }
        count++;
    }
    return totalPrime;
}

bool isTwinPrime(int n)
{
    if (isPrime(n) == true)
    {
        if ((isPrime(n+2) == true) || (isPrime(n-2) == true))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    int next = n;
    bool result = false;
    while (result == false)
    {
        next++;
        if (isTwinPrime(next) == true)
        {
            result = true;
        }
    }
    return next;
}

int largestTwinPrime(int a, int b)
{
    int count = a, result = -1;
    while (count <= b)
    {
        if (isTwinPrime(count) == true)
        {
            result = count;
        }
        count++;
    }
    return result;
}