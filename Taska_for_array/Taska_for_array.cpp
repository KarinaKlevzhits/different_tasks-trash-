#include <iostream>
#include <cmath>
int abs_max(int* arr, int size)
{
	int max = std::abs(arr[0]);
	int index = 0;
	for (int i = 0;i != 9;++i)
	{
		if (std::abs(arr[i]) > max)
		{
			max = std::abs(arr[i]);
			index = i;
		}
	}
	return index;
}
int index_max(int* arr, int size)
{
	int max = arr[0];
	int index = 0;
	for (int i = 0;i != size;++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}

int index_min(int* arr, int size)
{
	int min = arr[0];
	int index_min = 0;
	for (int i = 0;i != size;++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index_min = i;
		}
	}
	return index_min;
}
int sum_before_max(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		if (i < index_max(arr,9))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int sum_between_min_max(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		if (index_min(arr, 9) < i && i<index_max(arr,9))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int sum_after_max(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		if (i > index_max(arr, 9))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int sum_after_abs_max(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		if (i > abs_max(arr, 9))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int sum_between_and_numbers(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != 9;++i)
	{
		if ((index_min(arr, 9) <= i && i <= index_max(arr, 9)))
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool positive(int a)
{
	if (a > 0)
	{
		return true;
	}
	return false;
}
bool negative(int a)
{
	if (a < 0)
	{
		return true;
	}
	return false;
}
int min_positive(int* arr, int size)
{
	int min = arr[0];
	int index = 0;
	for (int i = 0;i != size;++i)
	{
		if (positive(arr[i]) < arr[0])
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}
int max_negative(int* arr, int size)
{
	int max = arr[0];
	int index = 0;
	for (int i = 0;i != size;++i)
	{
		if (negative(arr[i]) > max)
		
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}
int t12(int* arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		if (min_positive(arr, 9) < i && i < max_negative(arr, 9))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int main()
{
	int arr[9]{ 1,2,3,4,5,-6,7,80,9 };
	//std::cout << sum_before_max(arr, 9);
	//std::cout << sum_between_min_max(arr, 9);
	//std::cout << sum_after_max(arr, 9);
	//std::cout << sum_after_abs_max(arr, 9);
	//std::cout << sum_between_and_numbers(arr, 9);
	//std::cout << t12(arr, 9);
}