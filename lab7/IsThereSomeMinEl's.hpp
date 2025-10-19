#pragma once
#include <iostream>
#include "FindMin.hpp"

int IsThereSomeMinEl(int matrix[][100], int n, int m)
{
    int MinEl = FindMin(matrix, n, m);
    int kol_min_el = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == MinEl)
            {
                ++kol_min_el;
            }
        }
    }
    return kol_min_el;
}