#include "iter.hpp"

void inc(int &v)
{
    v += 1;
}

int	main() {

	int	tab[] = {1, 2, 3, 4, 5, 6};

	::iter(tab, 6, inc);

	for (int i = 0; i < 6; i++)
		PRINT(tab[i])

	return 0;
}
