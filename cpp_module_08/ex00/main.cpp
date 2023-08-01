#include "easyfind.hpp"
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	vector<int>::iterator it = easyfind(vec, 4);
	cout << *it << endl;

	try {
		vector<int>::iterator it = easyfind(vec, 5);
		cout << *it << endl;
	}
	catch (std::exception &e) {
		cout << e.what() << endl;
	}
}
