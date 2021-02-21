#pragma once
double ex1(double* arr, int size)
{
	double sum = 0;
	for (int i = 0;i < size;++i)
	{
		sum += arr[i];
	}
	return sum;
}
double ex2(double* arr, int size)
{
	double sum = 1;
	for (int i = 0;i < size;++i)
	{
		sum *= arr[i];
	}
	return sum;
}
template <class T,class Arr,class  Operation>
T accumulate_simple(Arr arr, int size, T init,Operation f)
{

	for (int i = 0;i < size;++i)
	{
		init = f(init, arr[i]);
		
	}
	return init;
}
double ex3(double* arr, int size)
{
	double sum = 0;
	for (int i = 0;i < size;++i)
	{
		sum = arr[i];
	}
	return sum / size;
}
double sum(double a, double b)
{
	return a + b;
}
double average_simple(double* arr, int size)
{
	return accumulate_simple(arr, size, 0.0, sum) / size;
}
double ex12(double* arr, int size)
{
	double sum = 0;
	for (int i = 0;i < size;++i)
	{
		if (arr[i] < 0)
		{
			return sum;
		}
		sum += arr[i];
	}
	return sum;
}
template<class T,class Predicate,class Operation>
T accumulate_until_simple(T* arr, int size,T init, Predicate p, Operation o)
{
	for (int i = 0;i < size;++i)
	{
		if (p(arr[i]))
		{
			return init;
		}
		init=o(init,arr[i]);
	}
	return init;
}
template<class Arr, class Predicate >
bool ex11(Arr  arr, int k, int n,Predicate p)
{
	for (int i = 0;i < n;++i)
	{
		if (p(arr[i]))
		{
			return true;
		}

	}
	return false;
}
template<class Arr,class Predicate>
void ex5(Arr arr, int first, int last,Predicate p)
{
	for (;first != last;++first)
	{
		if (p(arr[first]))
		{
			std::cout << (int)arr[first] << std::endl;
		}
	}
}
template<class Arr,class Predicate>
double show_no_zero_index(Arr arr, int first, int last,Predicate p)
{
	int count = 0;
	for (;first != last;++first)
	{
		if (p(arr[first]))
		{
			++count;
			std::cout << first << std::endl;
		}
	}
	return count;
}
template<class Arr,class Predicate,class Operation>
double sum_positive_even(Arr arr, int first, int last, Predicate p,Operation o)
{
	double init = 0;
	for (;first != last;++first)
	{
		if (p(arr[first]))
		{
			init = o(init, arr[first]);
		
		}
		
	}
	return init;
}
template<class Arr, class Predicate,class Operation>
double no_zero_more_then_k(Arr arr,int first,int last,int k,Predicate p)
{
	
	int count = 0;
	for (;first != last;++first)
	{
		if (p(arr[first]))
		{
			++count;
			std::cout << first << std::endl;
		}
		
	}
	return count;
}
