#pragma once
#include <set>
#include "My_algoritmes.h"
int** create_array(int row, int column)
{
    int** arr2 = new int* [row];
    for (int i = 0;i != row;++i)
    {
        arr2[i] = new int[column];
    }
    return arr2;
}

template<class Matrix>
std::set<int> get_null_row(Matrix arr, int row, int column)
{
    std::set<int> result;
    for (int i = 0;i != row;++i)
    {
        if (all_off(arr[i], arr[i] + column, 0))
        {
            result.insert(i);
        }
    }
    return result;
}
template<class Matrix>
std::set<int> get_null_column(Matrix arr, int row, int column)
{
    std::set<int> result;
    for (int i = 0;i != row;++i)
    {
        int j = 0;
        bool flag = true;
        for (;j != column;++j)
        {
            if (arr[j][i] != 0)
            {
                flag = false;
                break;
            }

        }
        if (flag)
        {
            result.insert(i);
        }

    }
    return result;
}
