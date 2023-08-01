#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe(){}

std::list<std::string> PmergeMe::split( std::string s, const std::string& c) 
{
    std::list<std::string> arr;
    
    size_t start = 0;
    size_t end = s.find(c);

    while (end != std::string::npos) {
        std::string sub = s.substr(start, end - start);
        arr.push_back(sub);
        start = end + 1;
        end = s.find(c, start);
    }
    
    std::string sub = s.substr(start);
    arr.push_back(sub);
	return arr;
}

PmergeMe::PmergeMe(char** av)
{
	for(int i = 0; av[i]; i++) {
		std::list<std::string> arg = split(av[i], " ");
		for(std::list<std::string>::iterator it = arg.begin(); it != arg.end(); it++) {
			if(!isPositiveNumber(*it)) {
				std::cout << "Error" << std::endl;
				return;
			}
			else {
				arr.push_back(stoi(*it));
				forward_arr.push_front(stoi(*it));
			}
		}
	}
	if(arr.size() < 2) {
		std::cout << "Error" << std::endl;
		return;
	}
	std::cout << "Before: ";
	for(std::list<int>::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std:: endl;

	clock_t start = clock();
	mergeSort(0, arr.size() - 1);
	clock_t time = clock() - start ;
	forward_mergeSort(0, arr.size() - 1);
	clock_t time2 = clock() - time ;

	std::cout << "After: ";
	for(size_t i = 0; i < arr.size() ; i++)
	{
		std::cout << sort.top() << " ";
		sort.pop();
	}
	std::cout << std::endl << "Time to process a range of " << arr.size() << " elements with " << "std::list : " << (float)time / CLOCKS_PER_SEC * 1000 <<" us" << std::endl;
	std::cout << "Time to process a range of " << arr.size() << " elements with " << "std::forwardlist : " << (float)time2 / CLOCKS_PER_SEC * 1000 << " us" << std::endl;
}

bool PmergeMe::isPositiveNumber(const std::string& str) const {
	for(size_t i = 0; i < str .length(); i++) {
		if(str[i] == ' ')
			continue;
		if(!isdigit(str[i]))
			return false;
	}
	return true;	
}

void PmergeMe::mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        merge(left, mid, right);  
    }
}

void PmergeMe::merge(int left, int mid, int right)
 {
    int n1 = mid + 1;
	(void)left;
    int n2 = right - mid;
    std::list<int> left_arr;
	std::list<int> right_arr;

	int i = 0;
	std::list<int>::iterator it = arr.begin();
	while(i < n1) {
		left_arr.push_back(*it);
		i++;
		it++;
	}
	i = 0;
	while(i < n2) {
		right_arr.push_back(*it);
		i++;
		it++;
	}
	sortList(left_arr);
	sortList(right_arr);
	std::list<int> sorted_list(left_arr.begin(),left_arr.end());
	for(it = right_arr.begin(); it != right_arr.end(); it++)
		sorted_list.push_back(*it);
	sortList(sorted_list);
}

void  PmergeMe::sortList(std::list<int>& list) {
	std::list<int>::iterator min_it ;
	for(std::list<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		min_it = it;
		std::list<int>::iterator it2 = std::next(it);
		for(; it2 != list.end(); it2++)
			if(*it2 > *min_it)
				min_it = it2;
		int tmp = *it;
		*it = *min_it;
		*min_it = tmp;
	}
	for(std::list<int>::iterator it2 = list.begin(); it2 != list.end(); it2++)
		sort.push(*it2);
}

void PmergeMe::forward_mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        forward_mergeSort(left, mid);
        forward_mergeSort(mid + 1, right);

        forward_merge(left, mid, right);
    }
}

void PmergeMe::forward_merge(int left, int mid, int right)
 {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::forward_list<int> left_arr;
	std::forward_list<int> right_arr;

	int i = 0;
	std::forward_list<int>::iterator it = forward_arr.begin();
	while(i < n1) {
		left_arr.push_front(*it);
		i++;
		it++;
	}
	i = 0;
	while(i < n2) {
		right_arr.push_front(*it);
		i++;
		it++;
	}
	forward_List_sort(left_arr);
	forward_List_sort(right_arr);
	sorted_list.clear();
	for(it = left_arr.begin(); it != left_arr.end(); it++)
		sorted_list.push_front(*it);
	for(it = right_arr.begin(); it != right_arr.end(); it++)
		sorted_list.push_front(*it);
	forward_List_sort(sorted_list);
}

void  PmergeMe::forward_List_sort(std::forward_list<int>& list) {
	std::forward_list<int>::iterator min_it ;
	for(std::forward_list<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		min_it = it;
		std::forward_list<int>::iterator it2 = std::next(it);
		for(; it2 != list.end(); it2++)
		{
			if(*it2 < *min_it)
				min_it = it2;
		}
		int tmp = *it;
		*it = *min_it;
		*min_it = tmp;
	}
}
