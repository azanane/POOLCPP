#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	PRINT("Top: " << mstack.top() << std::endl)
	
	mstack.pop();
	
	PRINT("Size: " << mstack.size() << std::endl)
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
		
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	PRINT("All stack: ")
	while (it != ite) {

		PRINT(*it)
		++it;
	}

	std::stack<int> s(mstack);

	PRINT(std::endl << "Size after a copy: " << s.size())
	
	return 0;
}