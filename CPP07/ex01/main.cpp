#include "iter.hpp"

template <typename T>
void inc(T &v)
{
    v += 1;
}

int	main() {

	int	tab[] = {1, 2, 3, 4, 5, 6};

	::iter(tab, 6, inc<int>);

	for (int i = 0; i < 6; i++)
		PRINT(tab[i])


	std::string strs[] = { "1", "2", "3"};

	PRINT("")
	for (int i = 0; i < 3; i++)
		PRINT(strs[i].size())

	::iter(strs, 3, inc<std::string>);

	for (int i = 0; i < 3; i++)
		PRINT(strs[i].size())

	return 0;
}
