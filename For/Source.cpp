#include <iostream>
#include <cmath>
/*void ex1( int n,int k) {

	for (int i = 1;i <= n;++i) //(Ќјчало - i,конец - n,шаг - +1)
	{
		std::cout << k;
	}
	int i = 1;
	while (i <= n) 
		{
		++i;
		std::cout << k;
		} 
	int i = 1;
	do
	{
		++i;
		std::cout << k;
	} while (i <= n);
} 
void ex2(int a, int b) {
	int n = 0;
	for (int i = a;i <= b;++i) {
		std::cout << i << std::endl;
		++n;

	}
	std::cout << n;
}
void ex3(int a, int b) {
	int n = 0;
	for (int i = b;i > a;--i) 
	{
		std::cout << i << std::endl;
		++n;

	}
	std::cout << n;
}
void ex4(double s) 
{
	for (int i = 1;i <= 10;++i) 
	{
		std::cout << i * s << std::endl;
	}
}
void ex5(double  s,double start,double end)
{
	
	for (;start <= end;start+=0.1)
	{
		std::cout << start * s << std::endl;
	}
}
void ex6(double s) 
{
	for (double i = 1.2;i <= 2;i += 0.2) 
	{
		std::cout << i * s << std::endl;
	}
}
void ex7(int a, int b)
{
	int sum = 0;
	for (int i = a;i <= b;++i)
	{
		sum = sum + i;

	}
	std::cout << sum << std::endl;
}
void ex8(int a, int b) 
{
	int proizv = 1;
	for (int i = a;i <= b;++i) 
	{
		proizv = proizv * i;
	}
	std::cout << proizv << std::endl;
}
void ex9(int a, int b) 
{
	int sum = 0;
	for (int i = a;i <= b;++i) 
	{
		sum += pow(i, 2);
	}
	std::cout << sum << std::endl;
}
void ex10(int n)
{
	double sum = 0;
	for (int i = 1;i <= n;++i)
	{
		sum += 1.0 / i;
	}
	std::cout << sum << std::endl;
} 
void ex11(int n)
{
	int sum = 0;
	for (int i = 0;i <=n;++i)
	{
		sum += pow(n + i, 2);
	}
	std::cout << sum << std::endl;
}
void ex12(int n)
{
	double proizv = 1;
	for (double i = 1.1;i <= n;++i)
	{
		proizv = proizv * (1 + (i / 10));
	}
	std::cout << proizv << std::endl;
}
void ex13(int n)
{
	double sum = 0;
	for (double i = 1;i <= n;i++)
	{
		sum += pow(-1, i + 1) * (1+i/10);
	}
	std::cout << sum << std::endl;
}
void ex14(int n)
{
	double sum = 0;
	for (double i = 1; i <=n;i++)
	{
		sum += (n*2)*(i- 1); 
		std::cout << sum << std::endl;
	}
	std::cout << sum << std::endl;
}
void ex15(double a, int n) 
{
	 double result = 1;
	for (int i = 1; i <= n;++i) {
		result = pow(a, n);

	}
	std::cout << result << std::endl;
}
void ex16(double a, int n)
{
	double result = 1;
	for (int i = 1;i <= n;++i)
	{
		result  = pow(a,i);
		std::cout << result << std::endl;
	}
	
}
void ex17(double a, int n)
{
	double sum = 0;
	for (int i=0 ;i <= n;++i) {
		sum += pow(a, i);
		std::cout << sum << std::endl;
	}

}
void ex18(double a, int n)
{
	double sum = 0;
	for (int i = 0;i <= n;++i)
	{
		sum += pow(-a, i + 1);
		std::cout << sum << std::endl;

	}
}
void ex19(int n)
{
	double proizv = 1;
	for (int i = 1; i <= n; ++i)
	{
		proizv *= i;
	}
	std::cout << proizv << std::endl;
}
void ex20(int n)
{
	int rez = 1;
	for (int i = 1; i <= n; ++i)
	{
		rez = rez + rez * i;
	}
	std::cout << rez << std::endl;
}
void ex21(int n)
{
	double rez = 1;
	for (int i = 1; i <= n; ++i)
	{
		double rez1 = rez * 1;
		rez = rez + 1 / rez1;
	}
	std::cout << exp(rez) << std::endl;
}
void ex22(double x, int n)
{
	double rez = 1;
	for (int i = 0;i <= n;++i)
	{
		rez = ((pow(x, i)) / i);
		std::cout << exp(rez) << std::endl;
	}
}
void ex23(double x, int n)
{
	double rez = 1;
	for (int i = 1;i <= n;i += 2)
	{
		rez = (pow(-x, i) / i);
		
	}

	std::cout << sin(rez) << std::endl;
}
void ex24(double x, int n)
{
	double rez = 1;
	for (int i = 1;i <= n;i += 2) 
	{

		rez = (pow(-x,i) / i);
	}
	std::cout << cos(rez) << std::endl;
}
void ex25(double x, int n)

{
	double rez = 0;
	for (int i = 1;i <= n;++i)
	{
		rez = (pow(-1, i - 1) * (pow(x, i) / i));

	}
	std::cout << log(1 + rez) << std::endl;
}
void ex26(double x,int n)
{
	double rez = 0;
	for (int i = 1;i <= n;i += 2)
	{
		rez = ((pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1));
	}
	std::cout << atan(rez) << std::endl;
}  
void ex27(double x, int n)
{
	double sum = 0;
	for (int i = 1;i <= n;i += 2)
	{
		sum = i*(2 * n - 1) * pow(x, 2 * n + 1) / (i * (2 * i) * (2 * i + 1));
	}
	std::cout << asin(sum) << std::endl;
}
void ex29(int n, double a, double b)
{
	for (int i = a;i <= b;++i)
	{
		int h = (b - a) / n;
	}
}
int ostatok(int a)
{
	return a % 1;
}
*/
bool isprime(int a)
{
	for (int i = 2;i <= sqrt(a);++i)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return a <= 1 ? false : true;
}
bool prime(int a)
{
	if (a == 1)
	{
		return false;
	}

	for (int i = 2;i < a;++i)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}
void febonachi(int*arr)
{
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0;i <= 10;++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		std::cout << arr[i] << " ";
	}
}
bool is_even(double n)
{
	int a = static_cast<int>(n);

	if (a % 2 == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	std::cout << is_even(0.5);
		//std::cout << isprime(44);
		//int arr[10];
		//febonachi(arr);
		//std::cout << ostatok(24);
		//std::cout << prime(2);
		//ex1(3, 6);
		//ex2(3,8);
		//ex3(3,9);
		//ex4(10.32);
		//ex5(11.6);
		//ex6(10.2);
		//ex7(3, 8);
		//ex8(2, 5);
		//ex9(2, 3);
		//ex10(4);
		//ex11(2);
		//ex12(4);
		//ex13(4);
		//ex14(10);
		//ex15(2, 5);
		//ex16(2, 6);
		//ex17(2,3);
		//ex18(2, 8);
		//ex19(5);
		//ex20(6);
		//ex21(7);
		//ex22(2,6);
		//ex23(1, 3);
		//ex24(2, 6);
		//ex25(0.8, 4);
		//ex26(0.8, 5);
		//ex27(0.5, 6);
		//ex29;

}