#include <iostream>
#include <cmath>
//Вариант 1
//1.Алгоритм - это последовательность действий, приводящих к решению задачи или демонстрации сообщения о невозможности найти решение задачи
//2.int sum(int x, int y)//определение
//{
//	//код
//}
//int sum(int x, int y);//объявление
//3.Найдите и исправьте ошибки
#include <string>
void z3()
{
	int a = 2, b = 3, r = 4;
	if (a + b)
	{
		if (a - b)
		{
			a *= b;
			b *= a++;
		}
		else
		{
			a *= (--b);
			b *= (a--);
		}
	}
	else
	{
		a--;
		b = a;
		++b;
	}
	std::cout << a << " " << b << " " << r;
}
//5.Найти произведение элементов стоящих на главной диагонали матрицы н*н.Проверить полученное число на простоту
bool is_prime(int a)
{
	for (int i = 2;i < sqrt(a);++i)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return a <= 1 ? false : true;
}
bool main_diagonal()
{
	int mul = 1;
	const int n = 4;
	int arr[n][n]{  {1,2,3,4},
					{1,1,3,4},
					{1,2,3,4},
					{1,2,3,4} };
	for (int i = 0;i < n;++i)
	{
		mul *= arr[i][i];
	}
	if (is_prime(mul))
	{
		return true;
	}
	return false;
}
/*Вариант 2
1.Структура – упорядоченное множество данных различного типа, которые называются полями или членами
структуры
2.Прототип - это описание функции(объявление),включающее имя функции ,типы аргументов и возращаемый*/ /*тип данных.*/
void v2_z3()
{
	char C = 'B', B = 'B';
	switch (C)
	{
	case 'A':
		std::cout << "A";
	case 'B':
		switch (B)
		{
		case 'A':
			std::cout << "BA";
			break;
		case 'B':
			std::cout << "BB";
			break;
		case 'C':
			std::cout << "BC";
			break;
		}
	case 'C':
		std::cout << "C";

	}

}
bool v2_z5()
{
	int sum = 0;
	const int n = 4;
	int arr[n][n]{ {1,2,3,4},
				   {1,3,5,7},
				   {2,6,7,8},
					{2,4,5,6} };
	int last = n - 1;
	for (int i = 0;i != n;++i)
	{
		sum += arr[i][last - i];
	}
	if (is_prime(sum))
	{
		return true;
	}
	return false;
}
//Вариант 3
//1.Функция - изолированный именованный блок кода, имеющий определенное назначение.
//2.switch (переменная)(принаимает входную переменную и значение)
//{
//case 0:(если switch примет 0)
//	тело кейса
//	код тела кейса 0
//	break;...
//default:
//	кейс по умолчанию
//}
//пример:кейсики с отметочками
void v3_z3()
{
	float x, y, r;
	x = 0, y = 2;
	while (!(x == 5 || y == 0))
	{
		r =(!(x > 1 || y <= 0)) ? ++x : y--;
		std::cout << x <<" "<< y <<" "<< r << std::endl;
	}
}
void v3_z5()
{

	const int n = 4;
	int arrzxc[n][n]{{ 1,2,3,4}, 
					 { 1,2,3,0 }, 
					 { 1,2,9,0 }, 
					 { 3,0,0,0 } };
	for (int i = 0;i < n;++i)
	{
		for(int  j=0;j!=n;++j)
		{

				if (arrzxc[i][j-1] == 0)
				{
					arrzxc[i][j-1] = 3;

				}
				std::cout << arrzxc[i][j] << " ";
		}
			}
			
		std::cout << std::endl;
		
		
	}
	
}
//Вариант 4
//1.Динамический массив - массив ,размер которого может изменяться во время исполнения программы
void v4_z3()
{
	const int n = 5;
	int Sum, i=0;
	int a[n] = { 11,-4,0,7,-8 };
	for (Sum = i; i < n - 1;)
	{
		Sum += a[++i];
		std::cout <<" "<<Sum;
	}
}
void v4_z5()
{
	const int n = 4;
	int arrzxc[n][n]{ { 1,2,3,4},
					 { 1,2,3,0 },
					 { 1,2,9,0 },
					 { 3,0,0,0 } };
	for (int i = 0;i < n;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (i < j)
			{
				arrzxc[i][j] = 0;
			}
			std::cout << arrzxc[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//Вариант 5 задание 1 Протоип-описание функции
//2 while (условие)
//{
//	Тело цикла
//}
//Данный цикл будет выполняться, пока условие, указанное в круглых скобках является истиной.
void v5_z3()
{
	bool a = true,b = false,c = true;
	(!(a || b) & (!c)) || (a & !b) ? std::cout << "1" : std::cout << "2";
}
//Вариант 5 задание 5 прооверка строки на палиндром
bool check_str_palindrom(std::string k)
{
	int len = k.length();
	for (int i = 0,j=len-1;i!=j;++i,--j)
	{
		if (k[i] != k[j])
		{
			return false;
		}
	}
	return true;
}
//V6 z1 Перегрузка функции-это возможность определять несколько функций с одним и тем же именем, но с разными параметрами.
void v6_z3()
{
	int m = 100;
	do
	{
		m /= 11;
		if (m == 0)
			break;
		switch (m)
		{
		case 1:case 2:case 3:std::cout << 2 << std::endl;
		case 4:case 5:std::cout << 3 << std::endl; break;
		case 6:case 7: case 8:std::cout << 4 << std::endl;break;
		default:
			std::cout << "Error";
		}
	} while (1);
}
//Вариант 6 задание 5
int reverse_number(int number)
{
	int n = 0;
	while (number)
	{
		n = 10 * n + number % 10;
		number /= 10;
	}

	return n;
}
bool check_number_palindrom(int number)
{
	if (reverse_number(number) == number)
	{
		return true;
	}
	return false;
}
//V7 z1 рекурсия-разложить на подзадачи которые рекурсивно разбиваются на еще меньшие 
void v7_z3()
{
	int r, x, y;
	r = x = y = 5;
	(!(x > 1 & y <= 0)) ? r = ++x : r = --y;
	std::cout << r << " " << x << " " << y;
}
//Вариант 7 задание 5 нод двух чисел
int nodd(int n, int m)
{
	for (int i = n; i > 0; i--)
	{
		if (n % i == 0 && m % i == 0)
		{
			return i;
		}
	}
}
//V8 z1 Переменная-это «ячейка» оперативной памяти компьютера, в которой может храниться какая-либо информация.
//v8 z2 с помощью структур
//struct C2Values
//{
//	int First;
//	int Second;
//};
//
//C2Values Get2Values()   //Эта ф-ция возвращает 2 значения.
//{
//	C2Values Result;
//	Result.First = 2;
//	Result.Second = 3;
//	return Result;
//}
//с помщью указателей и ссылок
//void v8_z3()
//{
//	float x, y,a,b;
//	x = 0, y = 7, a = b = 5;
//	(y > fabs(x) & fabs(x) < a || y < b) ? std::cout << true : std::cout << false;
//}
////Вариант 8 задание нок
int nok(int n, int m)
{
	return n * m / nodd(n, m);
}
//Вариант 9 найти сумму простых чисел в массиве
int sum_of_prime()
{
	int sum = 0;
	const int n = 10;
	int arr[n]{ 3,3,3,4,3,3,3,3,3,3 };
	for (int i = 0;i < n;++i)
	{
		if (is_prime(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
int main()
{
	//z3();// Ответ:с)7 18 4;
	//z5std::cout << main_diagonal();
	//v2_z3();BBC
	//std::cout << v2_z5();
	//v3_z3();b)121
	//			222
	//			212
	//			201
	v3_z5();
	//v4_z3();b)-4 -4 3 -5
	//v4_z5();
	//v5_z3();a)1
	//v6_z3();a)Error
	//v7_z3();a)665
	//v8_z3();c)1;
	//std::cout << check_str_palindrom("komok");
	//std::cout << check_number_palindrom(122186);
	//std::cout << nodd(6, 18);
	//std::cout << nok(126, 70);
	//std::cout << sum_of_prime();
}

































