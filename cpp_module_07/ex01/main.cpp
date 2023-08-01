#include "iter.hpp"


template<typename T, typename U, typename Z>
void iter(T* adr, U size, void(*f)(Z value)){
	for(U i = 0; i < size; i++){
		f(adr[i]);
	}
}


template<typename Z>
void print(Z  value)
{
	std::cout << value << std::endl;
}

int main() {

	std::string buf = "iter function";
	iter<const char, int, char>(buf.c_str(), 7, print);	

	return 0;
}