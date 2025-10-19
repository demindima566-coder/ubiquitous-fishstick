#pragma once
#include <iostream>

int FindMin(int matrix[][100], int n, int m)
{
    int MinEl = matrix[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] < MinEl)
            {
                MinEl = matrix[i][j];
            }
        }
    }
    return MinEl;
}