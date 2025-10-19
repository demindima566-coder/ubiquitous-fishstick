#include <iostream>
#include "Read.hpp"
#include "Write.hpp"
#include "FindMin.hpp"
#include "IsPrime.hpp"
#include "IsThereSomeMinEl's.hpp"
#include "RowProduct.hpp"
#include "NumberOfPrimeAbs.hpp"
#include "Sort.hpp"

using namespace std;

int main()
{
    int n, m;
    int matrix[100][100];

    cout << "Введите размеры матрицы (n*m): ";
    cin >> n >> m;

    cout << "Введите элементы матрицы (" << n << "x" << m << "):" << endl;
    
    Read(matrix, n, m);

    

    //cout << "Минимальный элемент: " << FindMin(matrix, n, m) << endl;
    
    cout << "Количество минимальных элементов: " << IsThereSomeMinEl(matrix, n, m) << endl;
    
    cout << "Количество простых элементов: " << NumberOfPrimeAbs(matrix, n, m) << endl;

    if ((IsThereSomeMinEl(matrix, n, m) > 1) && NumberOfPrimeAbs(matrix, n, m) > 1)
    {
        Sort(matrix, n, m);
        cout << "Полученная матрица:" << endl;
        Write(matrix, n, m);
    }
    else
    {
        cout << "Что-то не так( " << endl;
    }

    return 0;
}