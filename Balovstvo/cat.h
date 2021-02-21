#pragma once
#include <string>
#include <iostream>
struct Kitty
{
	std::string name;
	int age;
	std::string color;
	Kitty()
	{
		name = "Sara";
		age = 0;
		color = "grey";
		std::cout << "Kitty()";
	}
	Kitty(std::string n, std::string c, int a)
	{
		name = n;
		age = a;
		color = c;
		std::cout << "Kitty(std::string n,int a,std::string c)";
	}
};
