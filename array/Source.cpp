#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
void array()
{
	int arr[10]{0, 1,2,3,4,5,6,7,8,9};
	for (int i = 0;i < 10;++i)
	{
		std::cout << arr[i] << std::endl;
	}
}
void array2()
{
	size_t value;
	std::cin >> value;
	int* arr = new int[value];
	for (int i = 0;i <value;++i)
	{
		std::cin >> arr[i] ;
	}
	std::cout << "array already" << std::endl;
	for (int i = 0;i < value;++i)
	{
		std::cout << arr[i] << " ";
	}
}
void array_random()
{
	int arr[10];
	srand(time(0));
	for (int i = 0;i < 10;++i)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << std::endl;

	}
}*/
void array_random()
{
	int arr[10];
	srand(time(0));
	for (int i = 0;i < 10;++i)
	{
		arr[i] = rand() % 51 + 100;
		std::cout << arr[i] << std::endl;

	}
}
void array_sum()
{
	int sum = 0;
	int arr[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0;i < 10;++i)
	{
		sum += arr[i];
		
	}
	std::cout << sum << std::endl;
}
/*void array_sum3()
{
	int sum = 0;
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 2;i < 10;i += 3)
	{
		sum += arr[i];
		
	}
	std::cout << sum << std::endl;
}*/
void array_div2()
{

}
void array_sum3()
{
	int sum = 0;
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0;i < 10;++i)
	{
		if (i % 3 == 2 && i != 0)
		{
			sum += arr[i];
		}
		
	}
	std::cout << sum;
}
/*void array_div2()
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
		if (arr[i] % 2 == 0)
		{
			std::cout << arr[i] << std::endl;
		}
	}
}*/
void change_0()
{
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 1;i < 10;i += 2)
	{
		arr[i] = 0;
	}
	for (int i = 0;i < 10;++i)
	{
		std::cout << arr[i] << std::endl;
    }
}
 void array_change_12()
{
	 int arr[30];
	 srand(time(0));
	 for (int i = 0;i < 30;++i)
	 {
		 arr[i] = rand() % 100;
		 std::cout << arr[i] << std::endl;

	 }
	 std::cout << "already" << std::endl;
	 for (int i = 0;i < 30;++i)
	 {
		 if (arr[i] % 10 == 3)
		 {
			 arr[i] = 12;
		 }
		 std::cout << arr[i] << std::endl;
	 }

}
 void mas10(int*arr)
 {
	 for (int i = 0;i != 10;++i)
	 {
		 if (arr[i] > 0)
		 {
			 std::cout << "true" << std::endl;
		 }
		 else std::cout << "false" << std::endl;
	 }

 }
 void mas11(int k)
 {
	 int arr[10];
	 srand(time(0));
	 for (int i = 0;i < 10;++i)
	 {
		 arr[i] = rand() % 10;
		 if (arr[i] < k)
		 {
			 std::cout << "true" << " , " << arr[i] << std::endl;
		 }
		 else std::cout << "false" << " , " << arr[i] << std::endl;
	 }
 }
 double mas12()
 {
	 double count = 0;
	 double arr[10];
	 srand(time(0));
	 for (int i = 0;i < 10;++i)
	 {
		 ++count;
		 arr[i]=rand() % 10;
		 if (arr[i] == 0)
		 {
			 return 0;
		 }
		
	 }
	 return count;
 }
 double mas13(int* arr)
 {
	 int sum = 0;
	 for (int i = 0;i <= 10;++i)
	 {
		 if (arr[i] > 0 && arr[i] % 2 == 0)
		 {
			 sum += arr[i];

		 }
		 else if(arr[i] == 0)
		 {
			 return 0;
		 }

	 }
	 return sum;
 }
 double mas14(int* arr,int k)
 {
	 int count = 0;
	 for (int i = 0;i < 10;++i)
	 {
		 if (arr[i] < k)
		 {
			 ++count;
		 }
	 }
	 return count;
 }
 double mas15(int* arr, int k)
 {
	 for (int i = 0;i < 10;++i)
	 {
		 if (arr[i] > k)
		 {
			 return i;
		 }
		  
	 }
	 return 0;
 }
 double mas16(int* arr, int k)
 {
	 int max_k = 0;
	 for (int i = 0;i != 10;++i)
	 {
		 if (arr[i] > k)
		 {
			 max_k = i;
		 }
	 }
	 return max_k;
 }
void mas17(int b)
 {
	 bool used = true;
	 size_t value;
	 std::cin >> value;
	 int* arr = new int[value];
	 for (int i = 0;i != value;++i)
	 {
		 std::cin >> arr[i];
	 }
	 for (int y = 0;y != value;++y)
	 {
		 std::cout << b << arr[y] << " , ";
	 }
 }
void mas18 (int*arr)
{
	for (int i = 0;i != 10;++i)
	{
		if (arr[i-1] != arr[i])
		{
			std::cout << arr[i] << " ";
		}
		
	}
	
}
void mas19(int* arr)
{
	int count = 0;
	for (int i = 0;i != 10;++i)
	{
		if (arr[i] > arr[i + 1])
		{
			std::cout << arr[i] << " " << std::endl;
			++count;
		}
	}
	std::cout << count;
}
double per(double a)
{
	return a * a;
}
double sq(double a)
{
	return std::pow(a, 2);
}
void task1()
{
	int a;
	std::cin >> a;
	a > 0 ? a : 0;
	std::cout << sq(a) << " " << per(a);
}
void febonachi(int*arr)
{
	for (int i = 0;i <= 10;++i)
	{
		arr[i] = arr[i-1] + arr[i - 2];
		std::cout << arr[i] << " ";
	}
}
void posl(int* arr)
{
	for (int i = 0;i < 10;++i)
	{
		if (arr[i] <= arr[i + 1])
		{
			std::cout << arr[i];
		}
	}
}

void max1(int* arr)
{
	int max = arr[0];
	int max2 = arr[0];
	for (int i = 0;i <= 10;++i)
	{
		if (arr[i] > max && arr[i] > max2)
		{
			std::cout << arr[i] = max << " " << arr[i] = max2;
		}
		
	}
}
int main()
{
	int arr[10]{ 0,1,1,1,3,2,1,7,8,9};
	//array();
	//array2();
	//array_random();
	//array_sum();
	//array_sum3();
	//array_div2();
	//change_0();
	//array_change_12();
	//mas10(arr);
	//mas11(4);
	//std::cout<<mas12()<<std::endl;
	//std::cout << mas13(arr) << std::endl;
	//std::cout << mas14(arr, 7) << std::endl;
	//std::cout << mas15(arr, 4) << std::endl;
	//std::cout << mas16(arr, 4) << std::endl;
	//mas17(3);
	//mas18(arr);
	//mas19(arr);
	//task1();
	febonachi(arr);
	//posl(arr);
	//max1(arr);
}