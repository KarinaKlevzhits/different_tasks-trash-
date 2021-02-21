#include <iostream>
struct Integer
{
	int value;
	Integer()
	{
		std::cout << "Integer()" << std::endl;
		value=0;
	}
	Integer(double v)
	{
		std::cout << "Integer (double v)" << std::endl;
		value = v;
	}
	Integer(const Integer& a)
	{
		std::cout << "Integer (const Integer&)" << std::endl;
		value = a.value;
	}
};
Integer sum(Integer a, Integer b)
{
	return Integer(a.value + b.value);
}
bool operator>(Integer a, Integer b)
{
	return a.value>b.value;
}
int sum_main_diagonal()
{
	int sum = 0;
	int arr[2][3]{ {1,2,3},
				   {1,2,3} };
	for (int i = 0;i < 2;++i)
	{
		for (int j = 0;j < 3;++j)
		{
			if (i == j)
			{
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
int sum_second()
{
	int arr[3][3]{ {1,2,3},{1,2,3},{1,2,3} };
	int sum = 0;
	int last = 3- 1;
	for (int i = 0;i != 3;++i)
	{
		sum += arr[i][last - i];
	}
	return sum;
}
int sum_pr()
{
	int arr[4][3]{ {1,2,3},{1,2,3},{1,2,3},{1,2,3,} };
	int sum = 0;
	int last = 3 - 1;
	for (int i = 0;i != 4;++i)
	{
		for (int j =0;j != 3;++j)
		{
			if (i + j == last)
			{
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
void z2(int rows,int cols)
{
	
	double** arr = new double* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new double[cols];
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin>>arr[i][j];
		}
	}
	//for (int i = 0; i < rows; ++i)
	//{
	//	for (int j = 0; j < cols; ++j)
	//	{
	//		std::cout<< arr[i][j]<<"\t";
	//	}
	//	std::cout<<std::endl;
	//}
	int u = 0;
	for (int i = 0;i != rows;++i)
	{
		for (int j = 0;j != cols;++j)
		{
			if (arr[i][j] == arr[i+1][j+1])
			{
				u = arr[i][j];
				std::cout << u;
			}
		}
	}
}

int main()
{
	int rows;
	int cols;
	do
	{
		std::cin >> rows;
	} while (rows < 1);
	do
	{
		std::cin >> cols;
	} while (cols < 1);
	z2(rows,cols);
}
//int main()
//{
//	/*Integer k;
//	Integer l = 10;
//	Integer l1(10);
//	Integer l2 = l1;*/
//	//Integer result = sum(l, l1);
//	//std::cout << result.value;
//	//std::cout << operator>(l1, l2) << std::endl;
//	//std::cout << sum_main_diagonal();
//	//std::cout << sum_second();
//	std::cout << sum_pr();
//}