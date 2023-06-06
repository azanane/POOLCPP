#include "PmergeMe/PmergeMe.hpp"
#include <sys/time.h>

bool isNumber(const std::string& operation) {

	if (operation[0] >= 48 && operation[0] <= 57) {

		return true;
	}

	return false;
}

int main(int ac, char **av)
{

	if (ac < 2) {

		PRINT("Need at least two arguments.")
		return 1;
	}


	int	i = 1;

	std::vector<int>	numbersVector;
	std::deque<int>		numbersDeque;

	while (av[i]) {

		std::string	str(av[i]);
		size_t 		index = 0, indexTmp = 0;

		while (index < str.size()) {


			if (str[index] < 48 || str[index] > 57) {

				PRINT("Error");
				return 1;
			}
			else if (index + 1 == str.size()) {

				long numberLong = std::atol(str.substr(indexTmp, index + 1).c_str()); 

				if (numberLong > 2147483647) {
					
					PRINT("Error : " << str.substr(indexTmp, index + 1).c_str() << " or the input only take integers");
					return 1;
				}

				int number = std::atoi(str.substr(indexTmp, index + 1).c_str());

				numbersVector.push_back(number);
				numbersDeque.push_back(number);
			}

			index++;
		}

		i++;
	}

	if (numbersVector.size() < 1) {
		PRINT("Empty list")
		return 1;
	}

	PRINTWOENDL("Before : ") 
	for (std::vector<int>::const_iterator it = numbersVector.begin(); it < numbersVector.end(); it++) {

		PRINTWOENDL(*it << ' ')
	}
	PRINT("")

	size_t K = 0;

	if (numbersVector.size() % 2 == 0)
		K = numbersVector.size() / 2;
	else {
		while (K < numbersVector.size() - K) {
			K++;
		}
	}
	clock_t start = clock();

	PmergeMe<std::vector<int> > merge = PmergeMe<std::vector<int> >(numbersVector, K);

	clock_t end = clock();
	double elapsed = 1000000.0 * double(end - start)/CLOCKS_PER_SEC;

	PRINTWOENDL("After :  ")
	for (std::vector<int>::const_iterator it = numbersVector.begin(); it < numbersVector.end(); it++) {

		PRINTWOENDL(*it << ' ');
	}
	PRINT("")
	PRINT("Time to process a range of " << numbersVector.size() << " elements with std::vector : " << elapsed << " us")

	start = clock();

	PmergeMe<std::deque<int> > test = PmergeMe<std::deque<int> >(numbersDeque, K);

	end = clock();
	elapsed = 1000000.0 * double(end - start)/CLOCKS_PER_SEC;
	PRINT("Time to process a range of " << numbersDeque.size() << " elements with std::vector : " << elapsed << " us")

	return 0;
}
