#include "RPN.hpp"

RPN::RPN(){};

RPN::RPN(const RPN& rpn){
	*this = rpn;
};

RPN& RPN::operator=(const RPN& rpn){
	(void)rpn;
	return *this;
}

std::queue<int> &RPN::getNumbers()
{
	return this->numbers;
}

std::queue<char> &RPN::getTokens()
{
	return this->tokens;
}

RPN::~RPN(){};

bool isToken(char str)
{
	if((str == '+' || str == '-' || str == '*' || str == '/'))
		return true;
	return false;
}

int calculate(int number1, int number2, char c)
{
	if(c == '+')
		return number1 + number2;
	if(c == '-')
		return number1 - number2;
	if(c == '*')
		return number1 * number2;
	else if(number2 != 0)
		return number1 / number2;
	return 0;	
}