#include "RPN.hpp"

int main(int ac, char** av)
{
	RPN rpn;
	if(ac != 2)
		return 0;
	int i;
	for(i = 0; av[1][i]; i++) 
	{
		if(av[1][i] == ' ')
			continue;
		if(isdigit(av[1][i]))
			rpn.getNumbers().push(static_cast<int>(av[1][i]) - 48);
		else if(isToken(av[1][i]))
			rpn.getTokens().push(av[1][i]);
		else {
			std::cout << "Error" << std::endl;
			return 1;
		}

	}
	if(rpn.getNumbers().size() - 1 == rpn.getTokens().size()) 
	{
		int result = rpn.getNumbers().front();
		rpn.getNumbers().pop();
		size_t len = rpn.getNumbers().size();
		for(size_t i = 0; len > i ; i++)
		{
			result = calculate(result, rpn.getNumbers().front(), rpn.getTokens().front());
			rpn.getNumbers().pop();
			rpn.getTokens().pop();
		}
		std::cout << "Result: " << result << std::endl;
	}
}