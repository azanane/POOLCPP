#include "Span/Span.hpp"
#include <vector>

int main()
{
	try {

		Span sp = Span(5);
	
		sp.addNumber(6);

		PRINT("Shortest span with only one element: " << sp.shortestSpan())
		PRINT("Longest span with only one element: " << sp.longestSpan() << std::endl)

		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		PRINT("Shortest: " << sp.shortestSpan())
		PRINT("Longest: " << sp.longestSpan() << std::endl)

		std::vector<int>	v(2, 2);
		PRINT("Trying to add too much: ")
		sp.addRange(v.begin(), v.end());

	}
	catch (std::exception& e)
	{
		PRINT(e.what())
	}

	return 0;
}
