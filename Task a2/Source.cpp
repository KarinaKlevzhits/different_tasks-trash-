#include <iostream>
#include <cmath>
bool easy_num(int a)
{
    if (a % 2 == 0)
    {
        return false;
    }
    for (int i = 3;i <= std::sqrt(a);i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int sum_of_digit(int value)
{
    int sum = 0;
    for (;value != 0;value /= 10)
    {
        sum += value % 10;
    }
    return sum;
}
void easy_mum_sum_digits(int n, int m)
{
    for (int i = 1;i < n;++i)
    {
        if (easy_num(i) && sum_of_digit(i) < m)
        {
            std::cout << i << ' ';
        }
    }
}
void task27_1(int n)
{

    int a;
    std::cin >> a;
    int sum = 0;
    for (int i = 0;i<n,a<n;++i,++a)
    {
        sum += std::pow(a, i);
       
    }
    std::cout << sum;
}
void task27_2(int n)
{
    int x;
    std::cin >> x;
    int p = 1;
    for (;x != n;x=++x)
    {
        p *= x;
        std::cout << x << " ";
    }
    std::cout << p;
}
bool is_polindrom(int* arr)
{
    for (int i = 0, int j = 10;i != j;++i, --j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        return false;
    }
}
int main()
{
    int arr[10]{ 1,2,3,4,5,5,4,3,2,1 };
    //unsigned short int value = -1;
    //std::cout << value;
    //double value1 = value;
    //std::cout << value1;
    //unsigned int num = -1;
    //double num1 = num;
   // int i = 1;
   // for (; std::pow(100, i + 1) < value; ++i);
    //std::cout << i;
    //std::cout << (std::pow(100, i+1) < value);
   // int n;
    ///std::cin >> n;
   // int zxc = 1;
    //for (; i < n; ++i)
       // zxc *= i;
    //00std::cout << i << std::endl;
    //std::cout << easy_num(5);
    //std::cout << sum_of_digit(100);
    //easy_mum_sum_digits(5, 100);
    //task27_1(10);
    //task27_2(10);
    std::cout << is_polindrom(arr);
    
}