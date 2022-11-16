#include "Classes/Cat/Cat.hpp"
#include "Classes/Dog/Dog.hpp"

int main()
{
	const Animal*	animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	PRINT(std::endl)

	for (int i = 0; i < 5; i++)
		delete animals[i];

	PRINT("");

	for (int i = 5; i < 10; i++)
		delete animals[i];


	//	to do the following tests, you have to pass the _ideas in brain and the _brain in Dog in public
	//	These tests are implemented to prove that the copy is a deep copy

	// PRINT("")
	// Dog dog;
	// Brain* brain = dog._brain;

	// for (int i = 0; i < 5; i++)
	// 	brain->_ideas[i] = std::to_string(i);

	// PRINT("")
	// for (int i = 0; i < 5; i++)
	// 	PRINT(brain->_ideas[i]);

	// Dog dog2(dog);
	
	// PRINT("")
	// for (int i = 0; i < 5; i++)
	// 	PRINT(dog2._brain->_ideas[i]);

	// for (int i = 0; i < 5; i++)
	// 	brain->_ideas[i] = "eat";

	// PRINT( std::endl << &(*dog._brain))
	// PRINT( std::endl << &(*dog2._brain))

	// PRINT("")
	// for (int i = 0; i < 5; i++)
	// {
	// 	PRINT(dog2._brain->_ideas[i]);
	// 	PRINT(dog._brain->_ideas[i]);
	// }

	return (0);
}