#pragma once
#include <iostream>
#include <cmath>

int isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) return 0;
    }
    return 1;
}