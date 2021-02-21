﻿#include <iostream>
int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	return 1;
}
int fibonachi(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fibonachi(n - 1) + fibonachi(n - 2);
}
int main()

{
	int n;
	for (int i = 0;i != 10;++i)
	{
		n = fibonachi(i);
		std::cout << n;
	}
	//int result = factorial(n);
	//std::cout << result;
}