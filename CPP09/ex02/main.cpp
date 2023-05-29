#include "PmergeMe/PmergeMe.hpp"
#include <sys/time.h>

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


			if ((str[index] < 48 || str[index] > 57) && str[index] != 32) {

				PRINT(str[index] << " Error");
				return 1;
			}
			else if (str[index] == 32) {

				indexTmp = index;

				numbersVector.push_back(std::stoi(str.substr(indexTmp, index)));
				numbersDeque.push_back(std::stoi(str.substr(indexTmp, index)));
			}
			else if (index + 1 == str.size()) {

				numbersVector.push_back(std::stoi(str.substr(indexTmp, index + 1)));
				numbersDeque.push_back(std::stoi(str.substr(indexTmp, index + 1)));
			}

			index++;
		}

		i++;
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
