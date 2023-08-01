#include "PmergeMe.hpp"

int main(int ac, char **av) 
{
	if (ac < 1)
		return 1;
	PmergeMe merge(av + 1);
   return 0;
}
