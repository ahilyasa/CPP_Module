#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRandomNumbers(unsigned int n);
		class FullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
