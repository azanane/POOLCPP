#include "Base/Base.hpp"
#include "DerivedClasses/A.hpp"
#include "DerivedClasses/B.hpp"
#include "DerivedClasses/C.hpp"

Base * generate(void)
{
	int	random = rand() % 3;

	switch(random) {

		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		PRINT("A")
	else if (dynamic_cast<B *>(p))
		PRINT("B")
	else if (dynamic_cast<C *>(p))
		PRINT("C")
}

void identify(Base& p)
{

	try {

		A	testA;

		testA = dynamic_cast<A &>(p);
		PRINT("A")
	}
	catch (std::exception& e) {

		try {
			
			B	testB;

			testB = dynamic_cast<B &>(p);
			PRINT("B")
		}
		catch (std::exception& e) {

			PRINT("C")
		}
	}
}

int	main() 
{
	srand(time(NULL));

	Base	*base = generate();

	identify(base);
	identify(*base);

	delete base;

	return 0;
}
