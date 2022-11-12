#include "Classes/Cat/Cat.hpp"
#include "Classes/Dog/Dog.hpp"

int main()
{
	const Animal*	animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();

	PRINT("");

	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	PRINT(std::endl)

	for (int i = 0; i < 5; i++)
		delete animals[i];

	PRINT("");

	for (int i = 5; i < 10; i++)
		delete animals[i];

	return (0);
}