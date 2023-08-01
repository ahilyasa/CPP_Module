#include "ScalarConverter.hpp"

int main(int ac,char **av)
{
	if (ac != 2)
	{
		cout << "Usage: ./convert [value]" << endl;
		return 0;
	}
	ScalarConverter convert;
	convert.infoTypes(av[1]);
}
