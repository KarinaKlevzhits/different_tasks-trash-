#pragma once

template<class Iterat, class T>
bool all_off(Iterat first, Iterat last, T value)
{
    for (;first != last;++first)
    {
        if (*first != value)
        {
            return false;
        }
    }
    return true;
}
template<class Array>
void print_array2(Array arr, int row)
{
    for (int i = 0;i != row;++i)
    {
        std::cout << arr[i] << " ";
    }
}
template<class Matrix>
void print_array(Matrix arr, int row, int column)
{
    for (int i = 0;i != row;++i)
    {
        for (int j = 0;j != column;++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
template<class Iterator>
void print_container(Iterator first,Iterator last)
{
    for (;first!= last;++first)
    {
        std::cout << *first << " ";
    }
}
