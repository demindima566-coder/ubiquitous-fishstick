#pragma once
#include <iostream>
#include <algorithm>
#include "RowProduct.hpp"

void Sort(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (RowProduct(matrix[j], m) < RowProduct(matrix[j + 1], m))
            {

                for (int k = 0; k < m; k++)
                {
                    std::swap(matrix[j][k], matrix[j + 1][k]);
                }
            }
        }
    }
}