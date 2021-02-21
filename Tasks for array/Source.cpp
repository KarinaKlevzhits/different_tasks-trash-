#include <iostream>
#include <cmath>
#include <vector>
void ex1(int *arr)
{
	for (int i = 0;i < 11;++i)
	{
		arr[i] = arr[i] * 2;
		std::cout << arr[i] << " ";
	}
	
}
void array2()
{
	size_t value;
	std::cin >> value;
	int* arr = new int[value];
	for (int i = 0;i < value;++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "array already" << std::endl;
	for (int i = 0;i < value;++i)
	{
		std::cout << arr[i] << " ";
	}
}
bool polindrom()
{
	int arr[10]{ 1,2,3,4,5,9,8,7,11,18};
	for (int i = 0, j = 9;i <= j;++i,--j)
	{
		if (arr[i] == arr[j])
		{
			return true;
		}
		
	}
	return false;
	
}
int average(int* arr, int size,int youpoint)
{
	int aver = 0;
	for (int i = 0;i != size;++i)
	{
		arr[i] = i;
		aver += arr[i];
	}
	int classpoints = aver / size;
	if (youpoint > classpoints)
	{
		return true;
	}
	return false;
}
bool x5(int x)
{
	if (!(x > -10 && x < 10))
	{
		return true;
	}
	return false;
}

std::vector<int> invert(std::vector<int> values)
{

	for (int i = 0;i != values.size();++i)
	{
		std::cout<<values[-i];

	}
	return values;
}
bool prime(int a)
{
	for (int i = 0;i <= sqrt(a);++i)
	{
		if (a % i == 0)
		{
			return false;
		}
		return true;
	}
}
int main()
{
	//int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	//ex1(arr);
	//array2();
	//std::cout << polindrom();
	//std::cout << average(arr, 10,5);
	//std::cout << x5(-15);
	//invert({ 3, 4, 5 });
	std::cout << prime(5);
}