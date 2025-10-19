#pragma once
#include <cmath>
#include "IsPrime.hpp"

int NumberOfPrimeAbs(int matrix[][100], int n, int m)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int absVal = std::abs(matrix[i][j]);
            if (isPrime(absVal))
            {
                count++;
            }
        }
    }
    return count;
}