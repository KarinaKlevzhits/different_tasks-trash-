#include <iostream>

int factorial(int a)
{
	if (a == 1 || a == 0)
		return 1;
	return a * factorial(a - 1);
	//5*4*3*2*1
	//-||-
}
void print_asckii()
{
	const char a='C';
	std::cout << (int)a;
}
void symbol_code()
{
	int N=80;
	std::cout << (char)N;
}
void string_asckii(const char* s)
{
	for (;*s != 0;++s)
	{
		std::cout << int(*s) << std::endl;
	}
}
int reverse_to_number(char s)
{
	return s - '0';
}
int sizze_of_string(const char* s)
{
	int count = 0;
	for (;*s != 0;++s)
	{
		++count;
	}
	return count;
}
char* reverse(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size+1];
	char* i = (char*)s + size-1;
	char* j = result;
	for (;i+1 != s;--i,++j)
	{
		*j = *i;
		std::cout << (int)*i << std::endl;
	}
	*j = 0;
	return result;
}

int* reverse_array(int *arr, int size)
{
	int* a = new int[size];
	int* i = arr+size-1;
	int* j = a;
	for (;i +1!= arr;--i, ++j)
	{
		*j = *i;
		std::cout << *i << " " << *j << std::endl;
	}
	return a;
}
int* even_elements(int* arr, int size)
{
	int* i = arr;
	for (;i !=arr+size;++i)
	{
		if (*i % 2 == 0)
		{
			std::cout << *i << " ";
		}
	}
	return 0;
}
int* even_array_1(int* first, int* last)
{
	for (first;first != last;++first)
	{
		if (*first % 2 == 0)
		{
			std::cout << *first;
		}
	}
	return 0;
}
bool is_vowel(char a)
{
	const char* vowels = "aeyuio";
	for (char* i = (char*)vowels;i != vowels + 6;++i)
	{
		if (*i == a)
		{
			return true;
		}
	}
	return false;
}
void vowels_elements(const char* s)
{
	int size = sizze_of_string(s);
	char* i = (char*)s;
	for (;i != s + size;++i)
	{
		if (is_vowel(*i))
		{
			std::cout << *i << " ";
		}
	}
}
char* get_vawels(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size + 1];
	char* i = (char*)s;
	char* j = result;
	for (;i != s + size;++i)
	{
		if (is_vowel(*i))
		{
			*j = *i;
			++j;
		}
	}
	*j = 0;
	return result;
}

char upper_case(char a)
{
	return a - 32;
}
bool is_letter(char a)
{
	return  ((a >= 97 && a <= 122) || (a >= 65 && a <= 90)) ? true : false;


}
bool is_letter_in_uppercase(char a)
{
	return (a >= 65 && a <= 90) ? true : false;
}
bool is_letter_in_downcase(char a)
{
	
	return (a >= 97 && a <= 122) ? true : false;
}
char* string_upper_case(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size + 1];
	char* i = (char*)s;
	char* j = result;
	for (;i != s + size;++i)
	{
		if (!is_letter(*i)||is_letter_in_uppercase(*i))
		{
			*j = *i;
			
		}
		else
		{
			*j = upper_case(*i);
		}

		++j;
	}
	*j = 0;
	
	return result;
}
int downcase(char a)
{
	return a + 32;
}
char* inverse(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size + 1];
	char* i = (char*)s;
	char* j = result;
	for (;i != s + size;++i)
	{
		if (is_letter(*i))
		{
			if (is_letter_in_uppercase(*i))
			{
				*j = downcase(*i);
			}
			else 
			{
				*j = upper_case(*i);
			}
		}
		else
		{
			*j =*i;
		}

		++j;
	}
	*j = 0;

	return result;
}
char* double_symbol(const char* s,char c)
{
	int size = sizze_of_string(s);
	char* result = new char[size*2+1];
	char* i = (char*)s;
	char* j = result;
	for (;i != s + size;++i)
	{
		if (*i == c)
		{
			*i = *j;
			++j;
		}
		*j = 0;
		++j;
	}
	*j = 0;
	return result;
}

bool str_vs_str(const char* s, const char* s1)
{
	for (;*s != 0 && *s1 != 0;++s, ++s1)
	{
		if (*s != *s1)
		{
			return false;
		}
	}
	return true;
}
bool is_include(const char* s, const char* s2)
{
	char* j = (char*)s;
	for (char* i = (char*)s2;*i != 0;++i)
	{
		if (*i != *j)
		{
			return false;
		}
	}
	return true;
}
//bool is_sub_string(const char* s, const char* s2)
//{
//	int s1_size = sizze_of_string(s);
//	int s2_size = sizze_of_string(s2);
//	for (int i = 0;i < s2_size;++i)
//	{
//
//	}
//}
//bool str_in_str(const char* s,sonst dchar* s2)
char* slice(const char* s,int begin,int end)
{
	int size = sizze_of_string(s);
	char* result = new char[size+1];
	char* i = (char*)s+begin;
	char* last = (char*)s + end;
	char* j = result;
	for (;i != last;++i)
	{
		*j = *i;
		++j;
	}
	*j = 0;
	return result;
}
char* delete_whitespace(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size + 1];
	char* i = (char*)s;
	char* last = (char*)s ;
	char* j = result;
	for (;*i != 0;++i)
	{
		if (*i != ' ')
		{
			*j = *i;
			
			++j;
			
		}
		else
		{
			for (;*(i+1) == ' ';++i);
			*j = *i;
			++j;
		}
		
	}
	*j = 0;
	return result;
}
char* find_letter(const char* s,char c)
{

	char* i = (char*)s;
	for (;*i != 0;++i)
	{
		std::cout << *i << std::endl;
		if (*i == c)
		{
			return i;
		}
	}

	return i;
}
char* delete_all_spaces(const char* s)
{
	int size = sizze_of_string(s);
	char* result = new char[size + 1];
	char* i = (char*)s;
	char* last = (char*)s;
	char* j = result;
	for (;*i != 0;++i)
	{
		if (*i != ' ')
		{
			*j = *i;
			++j;
		}
		else
		{
			for (;*(i + 1) == ' ';++i);
			*j = *i;
			++j;
		}
	}
	*j = 0;
	return result;
}
bool check_str_palindrom(const char* s)
{

	int len = sizze_of_string(s);
	for (int i = 0, j = len - 1;i != j;++i, --j)
	{
		if (s[i] != s[j])
		{
			std::cout << delete_all_spaces(s) << std::endl;;
			return false;
		}
	}
	std::cout << delete_all_spaces(s) << std::endl;;
	return true;
}
int main()
{
	//const char* s = { 'abcde' };
	int arr[2]{ 1,2 };
	const char* str = "argent ina manitnegra";
	const char* str2 = "manit";
	//print_asckii();
	//symbol_code();
	//string_asckii(str);
	//std::cout<<reverse_to_number('1');
	//std::cout << reverse(str);
	/*int* a = reverse_array(arr, 2);
	for (int* i = a;i != a + 2;++i)
	{
		std::cout << *i << std::endl;
	}*/
	//int* b = even_elements(arr, 2);
	/*for (int* i = b;i != b;++i)
	{
		std::cout << *i;
	*/
	//int* c = even_array_1(arr, arr + 2);
	//vowels_elements(str);
	//std::cout << get_vawels(str);
	//std::cout << upper_size('a');
	//std::cout << string_upper_case(str);
	//std::cout << inverse(str);
	//std::cout << double_symbol(str, c);
	//std::cout << str_vs_str(str, str2);
	//std::cout << slice(str, 1, 5);
	//std::cout << delete_whitespace(str);
	//char* d = find_letter(str, 'a');
	//std::cout << d-str << std::endl;
	////std::cout << check_str_palindrom(str);
	std::cout << is_include(str, str2);
}