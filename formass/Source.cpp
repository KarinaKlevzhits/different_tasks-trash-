#include <iostream>
#include <cmath>
#include "Predicates.h"
#include "Header.h"
#include <string>

void ex4(double* arr, int n)
{
	int sum = 0;
	int proizv = 1;
	for (int i = 0;i < n;++i)
	{
		sum += arr[i];
		proizv *= arr[i];
	}
	std::cout << sum << ' ' << proizv << std::endl;
}

/*double get_after_point(double value)
{
	return value = (int)value;
}
double round(double value)
{
	double temp = get_after_point(value);
	if (temp <= 0.5)
	{
		return(int)value;
	}
	return (int)value + 1;
}*/
double ex7(double* arr, int first, int last)
{
	int sum = 0;
	for (;first != last;++first)
	{
		sum += round(arr[first]);
	}
	return sum;
}

double count_even(int* arr, int first, int last)
{
	int count = 0;
	for (;first != last;++first)
	{
		if (is_even(arr[first]))
		{
			++count;
			std::cout << arr[first] << std::endl;
		}
	}
	return count;
}



bool ex10(int* arr, int first, int last)
{
	for (;first != last;++first)
	{
		if (positive(arr[first]))
		{
			return 1;
		}
	}
	return 0;
}

void ex1(int first, int last)
{
	int arr[30];
	for (;first != last;++first)
	{
		arr[first] = 1 + rand();
		std::cout << arr[1] << std::endl;
		if (arr[first] % 10 == 3)
		{
			arr[first] = 12;
			std::cout << arr[first] << std::endl;
		}
	}
}
double mass14(double *arr,int first, int last, int k)
{
	int count = 0;
	for (;first != last;++first)
	{
		if ((arr[first] < k))
		  {
			++count;
			std::cout <<first<< std::endl;
          }
	  }
	return count;
  }
void name()
{

}
int main()
{
	//std::str[26]{ "Ahramovich","Voronyk","Gavrilchik","Guluta","Davidovich","Dvorskiy","Doshechko","Zhuravlev","Zabavskaya","Zinevich","Kashtelyan","Klevzhits","Kozlova","Korkishko","Korolenko","Korol","Kulikovskaya","Marecki","Mikulich","Plis","Rogatnev","Starozhilov","Sukkonov","Chernysh","Chernyavskiy","Yakubovskiy"; }

	//ex1(0,30);
	//double arr[10]{1, 1,2, 3,4, 5, 6 ,7 ,8 ,9 };
	/*std::cout << accumulate_simple(arr, 10, 0, [](int a, int b) {return a + b;});
	std::cout << accumulate_simple(arr, 10, 1, [](int a, int b) {return a * b;});
	std::cout << accumulate_until_simple(arr, 10, 0, grear_zero, sum);
    ex5(arr, 0, 10, is_integer);
	std::cout << show_no_zero_index(arr, 0, 10, [](int a) {return a == 0;});
	std::cout << sum_positive_even(arr, 0, 10, even_positive, sum) << std::endl;*/
	//std::cout << ex1(mas,10) << std::endl;
	//std::cout << ex2(mas, 10) << std::endl;
	//std::cout << ex3(mas, 10) << std::endl;
	//std::cout << ex12(mas, 10) << std::endl;
	//std::cout << ex11(mas, 3, 10) << std::endl;
	//ex4(mas,8);
	//std::cout << ex7(mas, 0, 10) << std::endl;
	//std::cout << count_even(arr, 0, 10) << std::endl;
	//std::cout << show_noeven_index(arr, 0, 10) << std::endl;
	//std::cout << ex10(arr, 0, 10) << std::endl;
	//std::cout << mass14(arr, 1, 10, 7) << std::endl;
}