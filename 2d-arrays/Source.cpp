#include <iostream>
void arr1()
{
	const int m = 3;
	const int n = 2;
	int mas[m][n];
	//int arr[m][n] = { {1,2}, {3,4} ,{5,6} };
	for(int i =0;i<m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				std::cin >> mas[i][j];
			}
		}
	for (int i = 0;i < m;++i)
	{
		for (int j = 0;j < n;++j)
		{
			std::cout << mas[i][j] << "|";
		}
		std::cout << std::endl;
	}
}
int main()
{
	arr1();
}