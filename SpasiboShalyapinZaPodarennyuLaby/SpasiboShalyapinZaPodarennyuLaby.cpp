#include <iostream>
#include <set>
#include "Utill.h"
#include "My_algoritmes.h"
#include <vector>
template <class Matrix>
std::vector<int> copy_no_null(Matrix arr, int row, int column)
{
	auto rows = get_null_row(arr, 4, 4);
	auto columns = get_null_column(arr, 4, 4);
	int** result1 = create_array(row - rows.size(), column - columns.size());
	std::vector<int> result;
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			if (rows.find(i) == rows.end() && columns.find(j)==columns.end())
			{
				if (i1 == row - rows.size())
				{
					i1 = 0;
				}
				result.push_back(arr[i][j]);
				
				
				std::cout << arr[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
	return result;
}
int main()
{
	auto arr = new int[4][4]{ {0,2,3,0},
						      {0,0,0,0},
							  {0,0,0,0},
						      {0,2,3,0}};
	auto result = copy_no_null(arr, 4, 4);
	print_container(result.begin(), result.end());
	
}