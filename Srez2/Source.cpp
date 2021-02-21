#include <iostream>
#include <cmath>
int v1_z1(int a, int b, int c)
{
	int count = 0;
	if (a > 0)
	{
		++count;
	}
	if (b > 0)
	{
		++count;
	}
	if (c > 0)
	{
		++count;
	}
	return count;
}
int v1_z2(int k, int a)
{
	switch (k)
	{
	case 1:
		return a/ 1000000;
	case 2:
		return a / 1000;
	case 3:
		return a / 100000000;
	case 4:
		return a / 10000000000;
	default:
		return 0;
	}
}

int v2_z1(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int v2_z2(int k, int a, int b, int c)
{
	switch (k)
	{
	case 1:
		return a - b - c;
		
	case 2:
		return (a - b) / c;
		
	case 3:
		return a / (b - c);
		
	case 4:
		return a / b / c;
		
	default:
		std::cout << "Error";
		return 0;
	}
}
int v3_z1(int a, int b, int c)
{
	if ((a<b && a>c)||(a<c && a>b))
	{
		return a;
	}
	else if ((b > a && b < c) || (b<a && b>c))
	{
		return b;
	}
	else
	{
		return c;
	}
}
void  v3_z2(int k)
{
	switch (k)
	{
	case 1:;
	case 2:
		std::cout << "Bad";
		break;
	case 3:;
	case 4:
		std::cout << "Unsaticfactorily";
		break;
	case 5:;
	case 6:
		std::cout << "Normal";
		break;
	case 7:;
	case 8:
		std::cout << "Good";
		break;
	case 9:;
	case 10:
		std::cout << "Very good";
		break;
	default:
		std::cout << "Error";
	}
}
int v4_z1(int a, int b, int c)
{
	if (a > b && c > b)
	{
		return a + c;

	}
	else if (b > a && c>a)
	{
		return b + c;
	}
	else 
	{
		return a + b;
	}
}
void v4_z2(int k, int a, int b, int c)
{
	switch (k)
	{
	case 1:
		std::cout << a + b + c;
		break;
	case 2:
		std::cout << (a + b) * 3;
		break;
	case 3:
		std::cout << a * (b + c);
		break;
	case 4:
		std::cout << a * b * c;
		break;
	default:
		std::cout << "Error";
	}
}
bool v5_z1(int a, int b, int c)
{
	if (a < b && a < c && b<c)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int v5_z2(int k, int a)
{
	switch (k)
	{
	case 1:
		return a / 100;
		break;
	case 2:
		return a / 10000;
		break;
	case 3:
		return a / 1000;
		break;
	case 4:
		return a / 10;
		break;
	default:
		std::cout << "Error";
	}
}
int v6_z1(int a, int b, int c)
{
	if (a == b && a != c)
	{
		return 3;
	}
	else if (c == a && b != c)
	{
		return 2;
	}
	else {
		return 1;
	}
}
int v6_z2(int k, int a, int b)
{
	switch (k)
	{
	case 1:
		return a + b;
		break;
	case 2:
		return a - b;
		break;
	case 3:
		return a * b;
		break;
	case 4:
		return a / b;
		break;
	default:
		std::cout << "Error";
	}
}
int v7_z1(int a, int b, int c)
{
	if (a == b && a == c)
	{
		return 3;
	}
	else if (a == b || a == c || b == c)
	{
		return 2;

	}
	
}
void v7_z2(int k)
{
	switch(k)
	{
	case 1:;
	case 2:;
	case 12: 
		std::cout << "Winter";
		break;
	case 3:;
	case 4:;
	case 5:
		std::cout << "Spring";
		break;
	case 6:;
	case 7:;
	case 8:
		std::cout << "Summer";
		break;
	case 9:;
	case 10:;
	case 11:
		std::cout << "Autumn";
		break;
	default:
		std::cout << "Error";

    }
}
int v8_z1(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return 1;
	}
	else if (b < a && b < c)
	{
		return 2;
	}
	else {
		return 3;
	}
}
void v8_z2(int k)
{
	switch (k)
	{
	case 1:
		std::cout << "January";
		break;
	case 2:
		std::cout << "February";
		break;
	case 3:
		std::cout << "March";
		break;
	case 4:
		std::cout << "April";
		break;
	case 5:
		std::cout << "May";
		break;
	case 6:
		std::cout << "June";
		break;
	case 7:
		std::cout << "July";
		break;
	case 8:
		std::cout << "August";
		break;
	case 9:
		std::cout << "September";
		break;
	case 10:
		std::cout << "October";
		break;
	case 11:
		std::cout << "November";
		break;
	case 12:
		std::cout << "December";
		break;
	default:
		std::cout << "Error";

	}
}
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}
int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}
int v9_z12(int a, int b, int c)
{
	int min2 = min(min(a, b), c);
	int max2 = max(max(a, b), c);
	return max2 + min2;
}
/*int v9_Z1(int a, int b, int c)
{
	if ((a > b && a > c) && (c < b && c < a))
	{
		return a + c;
	}
	else if ((b > a && b > c) && (a < b && a < c))
	{
		return b + a;
	}
	else if((a>b && a>c)&&(b<a && b<c))
	{
		return a + b;
	}
	else if ((b > a && b > c) && (c < b && c < a))
	{
		return b+c;
	}
	else if ((c > a && c > b) && (a < b && a < c))
	{
		return c + a;
	}
	else if ((c > a && c > b) && (b < a && b < c))
	{
		return c + b;
	}
}*/
void v9_z2(int k)
{
	switch (k)
	{
	case 1:
		std::cout << "Bad";
		break;
	case 2:
		std::cout << "Unsatisfactorily";
		break;
	case 3:
		std::cout << "Normal";
		break;
	case 4:
		std::cout << "Good";
		break;
	case 5:
		std::cout << "Very good";
		break;
	default:
		std::cout << "Error";
	}
}
bool v10_Z1(int a, int b, int c)
{
	if (a > b && a > c && b > c)
	{
		return true;
	}
	return false;
}
void v10_Z2(int k)
{
	switch (k)
	{
	case 1:
		std::cout << "Monday";
		break;
	case 2:
		std::cout << "Tuesday";
		break;
	case 3:
		std::cout << "Wensday";
		break;
	case 4:
		std::cout << "Thurstay";
		break;
	case 5:
		std::cout << "Friday";
		break;
	case 6:
		std::cout << "Saturday";
		break;
	case 7:
		std::cout << "Sunday";
		break;
	default:
		std::cout << "Error";
	}
}
int main()
{
	int k;
	std::cin >> k;
	/*int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;*/
	//std::cout << v1_z1(a, b, c);
	//std::cout << v1_z2(k,a);
	//std::cout << v2_z1(a, b, c);
	//std::cout << v2_z2(k, a, b, c);
	//std::cout << v3_z1(a, b, c);
	v3_z2(k);
	//std::cout << v4_z1(a, b, c);
	//v4_z2(k, a, b, c);
	//std::cout << v5_z1(a, b, c);
	//std::cout << v5_z2(k, a);
	//std::cout << v6_z1(a, b, c);
	//std::cout << v6_z2(k,a,b);
	//std::cout << v7_z1(a, b, c);
	//v7_z2(k);
	//std::cout << v8_z1(a, b, c);
	//v8_z2(k);
	//std::cout <<v9_Z1(a, b, c);
	//std::cout << v9_z12(a, b, c);
	//v9_z2(k);
	//std::cout << v10_Z1(a,b,c);
	//v10_Z2(k);

}