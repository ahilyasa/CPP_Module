#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <forward_list>
#include <stack>
#include <time.h>

class PmergeMe{
	public:
		PmergeMe();
		PmergeMe(char **av);
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

	private:
		void mergeSort(int left, int right);
		void merge(int left, int mid, int right);
		void forward_mergeSort(int left, int right);
		void forward_merge(int left, int mid, int right);

		std::list<int> arr;
		std::stack<int> sort;
		std::forward_list<int> forward_arr;
		std::forward_list<int> sorted_list;
	
		void  forward_List_sort(std::forward_list<int>& list);
		void sortList(std::list<int>& list);
		std::list<std::string> split(std::string s, const std::string& c);
		bool isPositiveNumber(const std::string& str) const;
};		

#endif