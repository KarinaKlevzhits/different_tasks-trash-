#include <iostream>
#include <cmath>
void t(int a,int b)
{
	a > b ? std::cout << a << " " << b : std::cout << b << " " << a;
	
}
int t2(int a,int b)
{
	int c;
	return c = a > b ? a : b;
}
int t3(int a, int b, int c, int d)
{
	int e = 8;
	int z = a>b ? b : c>a ? d : e;
	return z;
}
int t4(int a)
{
	return (a / 10) % 10;
}
double v1_1(double a)
{
	return  a * 4;
}
double v1_12(double a)
{
	return a * a;
}
int v1_2(int a)
{
	int x1 = a / 100;
	int x2 = (a / 10) % 10;
	int x3 = a % 10;
	int result = x1*100 +x3*10+ x2;
	return result;
	
}
bool v1_3(int a, int b)
{
	return a % 3 == 0 || b % 3 == 0 ? true : false;
}
void v2_1(double a, double b)
{
	double p = 2 * (a + b);
	double s = a * b;
	std::cout << p << " " << s;
}
int v2_2(int a)
{
	int sotn = a / 100;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	int result = ed * 100 + dec * 10 + sotn;
	return result;
}
bool v2_3(int a, int b)
{
	return a % 3 == 0 && b % 3 == 0 ? true : false;
}
void v3_1(double r)
{
	double pi = 3.14;
	double p = 2 * pi * r;
	double s = pi * std::pow(r, 2);
	std::cout << p << " " << s;
}
int v3_2(int a)
{
	int t = a / 1000;
	int sotn = (a / 100) % 10;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	int result = ed * 1000 + dec * 100 + sotn * 10 + t;
	return result;
}
bool v3_3(int a, int b)
{
	return a % 2 != 0 && b % 2 != 0 ? true : false;
}
void v4_1(int a)
{
	int v = pow(a, 2);
	int s = 6 * pow(a, 2);
	std::cout << v << " " << s;
}
int v4_2(int a)
{
	int sotn = a / 100;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	int result = ed * 100 + dec * 10 + sotn;
	return result;
}
bool v4_3(int a, int b)
{
	return a % 2 == 0 || b % 2 == 0 ? true : false;
}
void v5_1(int a, int b, int c)
{
	int v = a * b * c;
	int s = 2 * (a * b + b * c + a * c);
	std::cout << v << " " << s;
}
int v5_2(int a)
{
	return a / 100 + (a / 10) % 10 + a % 10;
}
bool v5_3(int a, int b)
{
	return a < 0 || b < 0 ? true : false;
}
void v6_1(double d)
{
	const double pi = 3.14;
	std::cout << "P=" << pi * d << std::endl;
	std::cout << "S=" << pi * pow(d / 2.0, 2) << std::endl;
}
int v6_2(int a)
{
	int t = a / 1000;
	int sotn = (a / 100) % 10;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	return t * 1000 + dec * 100 + sotn * 10 + ed;
}
bool v6_3(double a, double b)
{
	return a > 0 && b > 0 ? true : false;
}
double v7_1(int a, int b)
{
	return (a + b) / 2;
}
int v7_2(int a)
{
	int t = a / 1000;
	int sotn = (a / 100) % 10;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	return ed * 1000 + dec * 100 + sotn * 10 + t;
}
bool v7_3(int a)
{
	return a > 0 ? true : false;
}
double v8_1(double a, double b)
{
	return sqrt(a * b);
}
int v8_2(int a)
{
	int t = a / 1000;
	int sotn = (a / 100) % 10;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	return sotn * 1000 + t * 100 + dec * 10 + ed;
}
bool v8_3(int a)
{
	return a % 5 == 0 ? true : false;
}
void v9_1(double a, double b,double c)
{
	double o = sqrt(pow(a, 2) + pow(b, 2));
	double p = a + b + c;
	std::cout << c << " " << p;
}
int v9_2(int a)
{
	int t = a / 1000;
	int sotn = (a / 100) % 10;
	int dec = (a / 10) % 10;
	int ed = a % 10;
	return dec * 1000 + sotn * 100 + t * 10 + ed;
}
bool v9_3(int a)
{
	return 	a > 0 ? true : false;
}
void v10_1(int a, int b, int c)
{
	double p = (a + b + c) / 2;
	double per = a + b + c;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << per << " " << s;
}
int v10_2(int a)
{
	return a / 100 * (a / 10) % 10 * a % 10;
}
bool v10_3(int a)
{
	return a % 2 != 0 ? true : false;
}
int main()
{
	//double r;
	//std::cin >>r;
	double d;
	std::cin >> d;
	///int b;
	//std::cin>>b;
	//int c;
	//std::cin >> c;
	//std::cout << t2(1, 3) << std::endl;
	//std::cout << t3(12, 19, 16, 17) << std::endl;
	//std::cout << t4(123) << std::endl;
	//std::cout << v1_1(a) << std::endl;
	//std::cout << v1_12(a);
	//std::cout<<v1_2(a);
	//std::cout << v1_3(a,b);
	//v2_1(a, b);
	//std::cout << v2_2(a);
	//std::cout << v2_3(a, b);
	//v3_1(r);
	//std::cout << v3_2(a);
	//std::cout << v3_3(a, b);
	//v4_1(a);
	//std::cout << v4_2(a);
	//std::cout << v4_3(a, b);
	//v5_1(a, b, c);
	//std::cout << v5_2(a);
	//std::cout << v5_3(a, b);
	v6_1(d);
	//std::cout << v6_2(a);
	//std::cout << v6_3(a, b);
	//std::cout << v7_1(a, b);
	//std::cout << v7_2(a);
	//std::cout << v7_3(a);
	//std::cout << v8_1(a, b);
	//std::cout << v8_2(a);
	//std::cout << v8_3(a);
	//v9_1(2, 3, 4);
	//std::cout << v9_2(a);
	//std::cout << v9_3(a);
	//v10_1(3, 4, 5);
	//std::cout << v10_2(a);
	//std::cout << v10_3(a);
	return 0;
}