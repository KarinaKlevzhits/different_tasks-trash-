#include <iostream>
#include <cmath>
int a4()
{
	int arr[10]{};
	int sum = 0;
	for (int i = 0;i != 10;++i)
	{
		arr[i] *= arr[i];
		sum += arr[i];
	}
	return sum;
}
int z1(int a, int b)
{
	double x = (pow(a, 2) - pow(b, 2));
	double p = std::abs(std::sqrt(std::pow(a - b, 2)));
	if (x > p)
	{
		std::cout << " x more then p:";
		return x;
	}
	else
	{
		std::cout << "p more then x:";
		return p;
	}
}
int div3(int a, int n)
{
    int count = 0;
    for (; a != n; ++a)
    {
        if (a % 3 == 0)
        {
            count += a;
        }
    }
    return count;
}
int fib_for()
{
    int sum = 0;
    int a = 0;
    int b = 1;
    for (int i = 0; i < 5; ++i) //5 - сколько раз будет повторяться цикл
    {
        a = a + b;
        b = b + a;
        sum = a + b;
    }
    return sum;
}
int fib_arr()
{
    int sum = 0;
    int arr[5]{};
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 5; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        sum += arr[i];
    }
    return sum;
}
int poln_kvadr_arr()
{
    int sum = 0;
    int arr[5]{};
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i * i;
        sum += arr[i];
    }
    return sum;
}
int pow_3()
{
    
    int sum = 0;
    for (int i = 0;i < 5;++i)
    {
            sum += std::pow(3, i);
        
    }
    return sum;

}
double x6()
{
    int sum = 0;
    for (int i = 0;i != 56;++i)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
double x9()
{
    int sum = 0;
    for (int i = 0;i != 47;++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
void nat_div(int n)
{
    for (int i = 1;i !=n+1;++i)
    {
        if (n % i == 0)
        {
            std::cout << i;
        }
      

    }
}
void obsh_div(int n, int m)
{

    for (int j = 1; j <= n; ++j)
    {
        if (n % j == 0)
        {
            for (int i = 1; i <= m; ++i)
            {
                if (m % i == 0)
                {
                    if (i == j)
                    {
                        std::cout << i << std::endl;
                    }
                }
            }
        }
    }
}
void obsh_kratn(int n, int m)
{

    for (int j = 1; j <= n; ++j)
    {
        if (j % n == 0)
        {
            for (int i = 1; i <= m; ++i)
            {
                if (i % m == 0)
                {
                    if (i == j)
                    {
                        if (i < m * n || j < m * n)
                        {
                            std::cout << i << std::endl;
                        }
                        else {
                            std::cout << "Kratnie bolshe m*n" << std::endl;
                        }
                    }
                }
            }
        }
    }
}
void nod(int n, int m)
{
    int k = 0;
    for (int j = 1;j <= n;++j)
    {
        if (n % j == 0)
        {
            for (int i = 1;i <= m;++i)
            {
                if (m % 1 == 0)
                {
                    if (i == j)
                    {
                        std::cout << i;
                    }
                }
            }
        }
    }
}
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
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int task1(int x, int a)
{
    const double pi = 3.14;
    if (x < 1.3)
    {
        return pi * std::pow(x, 2) - 7 / std::pow(x, 2);
    }
    if (x = 1.3)
    {
        return a * std::pow(x, 3) + 7 * std::sqrt(x);
    }
    if (x > 1.3)
    {
        return std::log(x + 7 * std::sqrt(x));
    }
}

int task4(int x, int a)
{
    if (x < 1.2)
    {
        return a*std::pow(x, 2) - 0.3*x + 4;
    }
    if (x = 1.2)
    {
        return a / x + std::sqrt(std::pow(x, 2) + 1);
    }
    if (x > 1.2)
    {
        return (a - 0.3 * x) / std::sqrt(std::pow(x, 2) + 1);
    }
}

int task7(int x, int a)
{
    if (x > 1)
    {
        return std::log(x + 1);
    }
    if (x <= 1)
    {
        return std::pow(std::sin(std::sqrt(std::abs(a * x))), 2);
    }
}
int task11(int x, int a)
{
    if (x > a)
    {
        return x*std::cbrt(x - a);
    }
    if (x = a)
    {
        return x*std::sin(a*x);
    }
    if (x < a)
    {
        return std::exp(-a*x)*std::cos(a*x);
    }
}
int task12(int a, int x)
{
    if (x < 2.8)
    {
        return (a - 0.39) / (std::exp(x) + std::cos(x));
    }
    if (x < 6 && x >= 2.8)
    {
        return (a - 0.39) / (x + 1);
    }
    if (x >= 6)
    {
        std::exp(x) + std::sin(x);
    }
}
int task9(int a, int x)
{
    if (x > 3.5)
    {
        return std::sin(x) * std::log(x);
    }
    if (x <= 3.5)
    {
        return std::pow(cos(x), 2);
    }
}
double p = 3.14;
double task2(double x, double a)
{
    if (x < 1.4)
    {
        return p * std::pow(x, 2) - 7 / std::pow(x, 2);
    }
    else if (x == 1.4) {
        return a * std::pow(x, 3) + 7 * std::sqrt(x);
    }

    return std::log(x + 7 * std::sqrt(std::abs(x + a)));
}
double task5(double x, double a)
{
    if (a < 1)
    {
        1, 5 * std::pow(std::cos(x), 2);
    }
    else if (x == 1)
    {
        1, 8 * a * x;
    }
    else if (1 < x < 2)
    {
        std::pow((x - 2), 2) + 6;
    }
    return 3 * std::tan(x);
}
double task8(double x, double a)
{
    if (a * x < 1)
    {
        return a * x - std::log(a * x);
    }
    else if (a * x == 1) {
        return 1;
    }
    return a * x - std::log(a * x);
}
double task3(int a, int x)
{
    if (1 <= x && x <= 2)
    {
        return a * (std::pow(x, 2)) * (std::log(x));
    }
    else if (x < 1)
    {
        return 1;
    }
    else
    {
        return (exp(a * x)) * (std::cos(2 * x));
    }
}
double task6(int x, int a)
{
    if (x < 0.5)
    {
        return (std::pow(log(x), 3)) + (std::pow(x, 2) )/ (std::sqrt(x + a));
    }
    else if (x == 0.5)
    {
        return (std::sqrt(x + a) + 1 )/ x;
    }
    else
    {
        return (std::cos(x) + a )* (std::pow(std::sin(x), 2));
    }
}


int task10(int x, int a)
{
    if (x > a)
    {
        return x * std::cbrt(x - a);
    }
    if (x = a)
    {
        return x * std::sin(a * x);
    }
    if (x < a)
    {
        return std::exp(-a * x) * std::cos(a * x);
    }
}
int nok(int n, int m)
{
    return n * m / nodd(n, m);
}
int nod_for3(int n, int m,int p)
{
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0 && m % i == 0 && p%i==0)
        {
            return i;
        }
    }
}
int sum_gen_div(int n, int m)
{
    int sum = 0;
    for (int j = 1; j <= n; ++j)
    {
        if (n % j == 0)
        {
            for (int i = 1; i <= m; ++i)
            {
                if (m % i == 0)
                {
                    if (i == j)
                    {
                        sum += i;
                        return sum;
                    }
                }
            }
        }
    }
}
int trehzn(int n)
{
    int count = 0;
    for (int i = 100;i < 1000;++i)
    {
        if ((i % 10 + (i / 10) % 10 + (i / 100) % 10)== n)
        {
            ++count;
        }
    }
    return count;

}
void stonks()
{
    int n;
    std::cout <<"Enter n: " << std::endl;
    std::cin >> n;
    int count100 = 0;
    int count20 = 0;
    int count10 = 0;
    int count5 = 0;
    int count1 = 0;
    if (n >= 100)
    {
        for (int i = n; i >= 100; i = i - 100)
        {
            ++count100;
        }
    }
    std::cout << count100 <<std::endl;
    if (n >= 20)
    {
        for (int i = n; i >= 20; i = i - 20)
        {
            ++count20;
        }
    }
    std::cout << count20 << std::endl;
    if (n >= 10)
    {
        for (int i = n; i >= 10; i = i - 10)
        {
            ++count10;
        }
    }
    std::cout<< count10 << std::endl;
    if (n >= 5)
    {
        for (int i = n; i >= 5; i = i - 5)
        {
            ++count5;
        }
    }
    std::cout << count5<<std::endl;
    if (n >= 1)
    {
        for (int i = n; i >= 1; i = i - 1)
        {
            ++count1;
        }
    }
    std::cout <<count1<<std::endl;
}
void stonks_kop()
{
    int n;
    std::cout << "Enter n: " << std::endl;
    std::cin >> n;
    int count50 = 0;
    int count20 = 0;
    int count15 = 0;
    int count10 = 0;
    int count5 = 0;
    int count1 = 0;
    if (n >= 50)
    {
        for (int i = n; i >= 50; i = i - 50)
        {
            ++count50;
        }
    }
    std::cout << count50 << std::endl;
    if (n >= 20)
    {
        for (int i = n; i >= 20; i = i - 20)
        {
            ++count20;
        }
    }
    std::cout << count15 << std::endl;
    if (n >= 15)
    {
        for (int i = n; i >= 15; i = i - 15)
        {
            ++count15;
        }
    }
    std::cout << count15 << std::endl;
    if (n >= 15)
    {
        for (int i = n; i >= 10; i = i - 10)
        {
            ++count10;
        }
    }
    std::cout << count5 << std::endl;
    if (n >= 5)
    {
        for (int i = n; i >= 5; i = i - 5)
        {
            ++count5;
        }
    }
    std::cout << count5 << std::endl;
    if (n >= 1)
    {
        for (int i = n; i >= 1; i = i - 1)
        {
            ++count1;
        }
    }
    std::cout << count1 << std::endl;
}
void dvuzn()
{

    for (int i = 10;i <= 99;++i)
    {
        if (((i * 100 + (i + 1))%(i*(i+1)))==0)
        {
            std::cout <<"k" << std::endl;
        }
    }
}
void chetire()
{
    for (int i = 999; i <= 9999; i++)
    {
        int k = (i / 1000 * 10 + i / 100) * ((i / 10) % 10 * 10 + i % 10);
        if (k % i == 0 && i % 10 == 0 && (i / 10) % 10 == 0)
        {
            std::cout << i << std::endl;
        }
    }
}
void vozr()
{
    for (int i = 100;i <= 1000;++i)
    {
        if (((i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)) && ((i / 100 != (i / 10) % 10 && (i / 10) % 10 < i % 10)))
        {
            std::cout << i << std::endl;
        }
    }
}
void sqrtm(int m, int n)
{
    for (int i = 0; i != n; ++i)
    {
        if ((i % 10 && i / 10 % 10 * 10) < n && std::pow(i % 10 + i / 10 % 10 * 10, 2) == m)
        {
            std::cout << i << std::endl;
        }
    }
}
bool is_hight_chart(int value)
{
    return true;
}
bool has_similar(int value)
{
    return true;
}
template<class Pred>
void undivindedn(int n, Pred pred)
{
    for (int i = 0;i != n;++i)
    {
        if (!pred(i))
        {
            std::cout << i << " ";
        }
    }
}
void taska7()
{
    int n = 228;
    int count = 0;
    for (int i = 0;i != n;++i)
    {

        for (int j = i;j != 0;i /= 10)
        {
            int last_digit = j % 10;
            if (i != 0 && i % last_digit != 0)
            {
                std::cout << i << " ";
                break;
            }
        }

    }
}
bool easy_num(int a)
{
    if (a == 2)
    {
        return true;
    }
    if (a % 2 == 0)
    {
        return false;
    }
    for (int i = 3;i <= std::sqrt(a);i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
        return true;
    }
   
}
void prime_number_do(int n)
{
    for (int i = 0;i < n;++i) {
        if (easy_num(i))
        {
            std::cout << i << std::endl;
        }
    }
}
void prime_div(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (easy_num(i) && n % i == 0)
        {
            std::cout << i << std::endl;
        }
    }
}
void prime_number_sum()
{
    for (int i = 1000; i < 10000; ++i)
    {
        if (easy_num(i) && i % 10 + (i / 10) % 10 == (i / 100) % 10 + (i / 1000) % 10)
        {
            std::cout << i << std::endl;
        }
    }
}
void primeindex(int n)
{
    int count = 0;
    for (int i = 0;i < n;++i)
    {
        if (easy_num(i))
        {
            ++count;
            std::cout << count << std::endl;
        }
    }
}
 bool prime_num(int a)
 {
        for (int i = 2;i < sqrt(a);++i)
        {
            if (a % i == 0)
            {
                return false;
            }
           
        }
        return true;

    }
int main()
{
    //std::cout << easy_num(7);
    std::cout << prime_num(1);
    //prime_div(70);
    //primeindex(25);
    //prime_number_sum();
   // prime_number_do(29);
    /*int a;
    std::cin >> a;
    int x;
    std::cin >> x;*/
	//int a;
	//std::cin >> a;
	//int b;
	//std::cin >> b;
	//std::cout << z1(a, b) << std::endl;
   // std::cout << poln_kvadr_arr();
    //std::cout << fib_arr();
    //std::cout<<fib_for();
    //std::cout<<div3(1, 10);
    //std::cout << pow_3();
    //std::cout << x6();
    //std::cout << x9();
    //nat_div(6);
    //obsh_div(9, 6);
    //obsh_kratn(4, 8);
    //std::cout<<nodd(6, 9);
    //int a = 0;
   // int b = a-- - a - --a;
    //std::cout << b-- << b << --a;
    //std::cout<<task3(x, a);
    //std::cout << task6(x, a);
    /*std::cout << task1(x, a);
    std::cout << task2(x, a);
    std::cout << task4(x, a);
    std::cout << task5(x, a);
    std::cout << task7(x, a);
    std::cout << task8(x, a);
    std::cout << task9(x, a);
    std::cout << task10(x, a);*/
    //std::cout << task11(x, a);
    // std::cout << task12(x, a);
    //std::cout << nok(7, 8);
    //std::cout << nod_for3(3, 6, 9);
    //std::cout << sum_gen_div(4, 16);
    //std::cout << trehzn(27);
    //stonks();
    //stonks_kop();
    //std::cout << z45(87);
   //dvuzn();
    //chetire();
    //vozr();
    //sqrtm(169, 45);
    //taska7();
    //system("color d ");
    //swapdvuznach();
}