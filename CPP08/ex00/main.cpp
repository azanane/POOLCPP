#include "easyfind.hpp"
#include <vector>
#include <map>

int main()
{
	std::vector<int>	v(1, 10);

	PRINT("Try to find an existing element in a vector : " << *easyfind(v, 10))
	PRINT("Try to find an non-existing element in a vector : " << *easyfind(v, 0))

	return 0;
}
