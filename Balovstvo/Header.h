#pragma once
#include <string>
#include <iostream>
struct Person
{
	std::string name;
	int age;
	Person()
	{
		name = "anonim";
		age = 0;
		std::cout << "Person()";
	}
	Person(std::string n, int a)
	{
		name = n;
		age = a;
		std::cout << "Person(std::string n,int a)";
	}

};