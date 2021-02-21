#pragma once
#
bool is_integer(double value)
{
	return value == (int)value;
}
bool is_even(int value)
{
	return value % 2 == 0;
}
bool is_noeven(int value)
{
	return value % 2 != 0;
}
 bool positive(int value)
 {
	 return value > 0;
 }
 bool grear_zero(int a)
 {
	 return a > 0;
 }
 bool no_zero(int a)
 {
	 return a != 0;
 }
 bool even_positive(int a)
 {
	 return is_even(a) && positive(a);
 }

