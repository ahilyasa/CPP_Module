#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& copy){
    cout << "Copy constructor called" << endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed& copy) {
    cout << "Copy assigment operator called" << endl;
    if (this == &copy)
        return *this;
    this->_raw = copy.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
    return _raw;
}

void Fixed::setRawBits(int raw){
    _raw = raw;
}

Fixed::Fixed(const int fixedNumber) {
    this->_raw = fixedNumber * 256.0;
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float fixedNumber){
    this->_raw = roundf(fixedNumber * 256.0f);
    cout << "Fload constructor called" << endl;
}

int Fixed::toInt() const {
    return this->_raw / 256;
}

float Fixed::toFloat() const {
    return this->_raw / 256.0f;
 }

std::ostream &operator<<(std::ostream& out, Fixed const &value){
    out << value.toFloat();
    return out;
} 