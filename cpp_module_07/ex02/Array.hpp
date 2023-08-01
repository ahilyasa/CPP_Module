#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
using std::cout;
using std::endl;

template<class T>
class Array { 
	public:
		Array(): size_(0), data_(NULL) {};
		
		Array(unsigned int n){
			size_ = n;
			data_ =new T[n];
		}
		
		Array(const Array& arr){
			*this = arr;
		}
		
		Array& operator=(const Array& arr) {
			size_ = arr.size_;
			data_ = new T[size_];
			for (unsigned int i = 0; i < size_; i++) {
				data_[i] = arr.data_[i];
			}
			return *this;
		}		

		~Array(){
			delete[] data_;
		}

		T& operator[](unsigned int index){
			if(index >= size_)
				throw std::out_of_range("index is out of bounds");
			else
				return data_[index];
		}

		unsigned int size() const{
			return size_;
		}

	private:
    	T* data_;
 		unsigned int size_;
};


#endif