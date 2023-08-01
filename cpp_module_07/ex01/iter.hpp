#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U, typename Z>
void iter(T* adr, U size, void(*f)(Z value));

template<typename Z>
void print(Z  value);

#endif
