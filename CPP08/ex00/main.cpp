#include "easyfind.hpp"
#include <vector>
#include <map>

int main()
{
	std::vector<int>	v(1, 10);

	std::vector<int>::iterator it = easyfind(v, 1111);
	if (it != v.end())
		PRINT("Try to find an existing element in a vector : " << *easyfind(v, 10001))
	else
		PRINT("NOT FOUND");

	return 0;
}
