#include <iostream>
struct Box
{
	int height;
	int weight;
	int length;
	Box(int h, int w, int l)
	{
		height = h;
		weight = w;
		length = l;
	}
	Box() = default;
	int volume()
	{
		return height * weight * length;
	}
};
void volum_box(Box* first, Box* last)
{
	for (;first!=last;++first)
	{
		(*first).volume();
		std::cout << first->volume()<<std::endl;
	}
}
int box_comporator(Box a,Box b)
{
	return a.volume() - b.volume();
}
template<class Iterator,class Comporator>
Iterator check(Iterator first, Iterator last, Comporator com)
{
	
	for (;first != last;++first)
	{
		if (com(*first, *(last - 1))<0)
		{
			return first;
		}
	}
	return last;
}
int main()
{
	Box a;
	a.height = 4;
	a.weight = 5;
	a.length = 6;
	Box b(4, 5, 6);
	Box arr[3]{ Box(2,6,3),a,b };
	volum_box(arr, arr + 3);
	auto result = check(arr, arr + 3, box_comporator);
	if (result == arr + 3)
	{
		std::cout << "0" << std::endl;
	}
	else
	{
		std::cout << result->volume() << std::endl;
	}
}