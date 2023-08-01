#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Date.hpp"
#include <iomanip>


class Date;

using namespace std;

class BitcoinExchange
{
	private:
		std::vector<int> d_split;
		std::vector<std::string> v_rate;
	public:
		BitcoinExchange(/* args */);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();
		void Data_csv();
		int Compare(Date &date);
};
int Type_control(std::string value);

#endif