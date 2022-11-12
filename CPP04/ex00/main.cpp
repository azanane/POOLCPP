#include "Classes/Cat/Cat.hpp"
#include "Classes/Dog/Dog.hpp"
#include "Classes/WrongCat/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	PRINT(std::endl << j->getType() << " ");
	PRINT(i->getType() << " " << std::endl);

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	PRINT(std::endl);

	const WrongAnimal* k = new WrongCat();

	PRINT(std::endl << k->getType() << " ");
	k->makeSound();

	PRINT(std::endl)
	delete meta;
	delete j;
	delete i;
	delete k;

	return (0);
}