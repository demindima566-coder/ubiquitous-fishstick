#pragma once
#include <iostream>

int RowProduct(int row[], int m) {
    int prod = 1;
    for (int j = 0; j < m; j++) {
        prod *= row[j];
    }
    return prod;
}