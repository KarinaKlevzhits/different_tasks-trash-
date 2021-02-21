#include <iostream>
#include <initializer_list>
#include <vector>
using IL = std::initializer_list<std::initializer_list<int> >;
template<class Matrix,class Matrix2>
void copy(Matrix src, Matrix2 dist, int row, int column)
{

    for (int i = 0;i != row;++i)
    {
        for (int j = 0;j != column;++j)
        {
            dist[i][j] = src[i][j];
        }
    }
}
int** create_array(int row, int column )
{
    int** arr2 = new int* [row];
    for (int i = 0;i != row;++i)
    {
        arr2[i] = new int[column];
    }
    return arr2;
}
template<class Iterat,class T>
T accumulate(Iterat first, Iterat last, T init)
{
    for (;first != last;++first)
    {
        init += *first;
    }

    return init;
}
int* sum_of_elements(int** arr, int row, int column)
{
    int* result = new int[row];
    for (int i = 0;i != row;++i)
    {
        result[i] = accumulate(arr[i], arr[i] + column, 0);
    }
    return result;
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
template<class Array>
void print_array2(Array arr, int row)
{
    for (int i = 0;i != row;++i)
    {
        std::cout << arr[i] << " ";
    }
}
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
template<class Matrix>
int counter_null_row(Matrix arr, int row,int column)
{
    int count = 0;
    for (int i = 0;i != row;++i)
    {
        if (all_off(arr[i],arr[i]+column,0))
        {
            ++count;
        }
    }
    return count;
}
template<class Matrix>
int counter_null_column(Matrix arr, int row, int column)
{
    int count = 0;
    for (int i = 0;i != row;++i)
    {
        bool flag = true;
        for (int j = 0;j != column;++j)
        {
            if (arr[j][i] != 0)
            {
                flag = false;
                break;
            }
 
        }
        if (flag)
        {
            ++count;
        }

    }
    return count;
}
template<class Matrix>
int result_row(Matrix arr, int row, int column)
{
    int count_row = 0;
   
    for (int i = 0;i != row;++i)
    {
        for (int j = 0;j != column;++j)
        {
            if (counter_null_row(arr[i][j],row,column))
            {
                ++count_row;
            }
           
        }
    }
    return count_row;

}
template<class Matrix>
int result_column(Matrix arr, int row, int column)
{
  
    int count_column = 0;
    for (int i = 0;i != row;++i)
    {
        for (int j = 0;j != column;++j)
        {
            if (counter_null_column(arr[j][i], row, column))
            {
                ++count_column;
            }
        }
    }
    return count_column;


}
template <class Matrix>
void delete_zero(Matrix arr, int column, int row)
{
    int r_column = column - result_column(arr, row, column);
    int r_row = row - result_row(arr, row, column);
    int** result = create_array(r_row, r_column);
}
//template <class Matrix>
//void index_zero(Matrix arr, int column, int row)
//{
//    std::vector<int> result;
//    for (int i = 0;i != row;++i)
//    {
//        if (!(all_off(arr[i], arr[i] + column, 0))
//        {
//            result.push_back();
//       }
//    }
//}
void sum_of_row()
{
    int sum[3]{};
    int arr[3][3]{{1,2,3},{1,8,3},{1,2,3}};
        for (int i = 0;i != 3;++i)
        {
            
            for (int j = 0;j != 3;++j)
            {
                sum[i] += arr[i][j];
                
            }
            std::cout << sum[i] << " ";

        }
}
int max(int*arr)
{
    
    
    int max = arr[0];
    for (int i = 0;i != 3;++i)
    {
            if (arr[i]> max)
            {
                max = arr[i];
            }
      
    }
    return max;
}
void max_column()
{
    int arr[3]{};
    int arr1[3][3]{ {1,2,3},
                    {1,8,3},
                    {1,2,3} };
    for (int i = 0;i != 3;++i)
    {
        for (int j = 0;j != 3;++j)
        {
            arr[j] = max(arr1[j]);
            std::cout << arr[j];
        }
       
    }
}
int main()
{/*
    int arr[3]{ 1,2,3 };
    int row=10;
    int column=10;*/
    
    //auto arr1 = new int[row][column];
   /* int** arr2 = create_array(3, 3);
    print_array(arr2, 3, 3);
    int row1 = row - result_row(arr2, row, column);
    int column1 = column - result_column(arr2, row, column);
    int* result = sum_of_elements(arr2, 3, 3);
    int** result_arr = create_array(row1,column1);
    print_array2(result, 3);*/
    //sum_of_row();
    //max_column();

    bool a = true, b = false, c = true;
    (!(a || b) & (!c)) || (a & !b) ? std::cout << "1" : std::cout << "2";
}
