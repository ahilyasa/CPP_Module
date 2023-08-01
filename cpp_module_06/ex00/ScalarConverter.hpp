#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& scalarConverter);
		ScalarConverter& operator=(const ScalarConverter& scalarConverter);
		virtual ~ScalarConverter();
		void infoTypes(string value);

	private:
		void toChar(string data);
		void toInt(string data);
		void toFloat(string data);
		void toDouble(string data);
		bool isNan(string data);
		string toUpperCase(string data);
		void printNumber(char c, char type);
};

#endif
