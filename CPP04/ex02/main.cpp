#include "Classes/Cat/Cat.hpp"
#include "Classes/Dog/Dog.hpp"

int main()
{
	const AAnimal*	animals[10];
	// const AAnimal*	test = new AAnimal(); // test to see that the AAnimal class can't be instancied

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

	return (0);
}