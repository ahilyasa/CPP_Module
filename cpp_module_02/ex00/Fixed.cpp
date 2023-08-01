#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& copy)
{
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

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
    cout << "getRawBits member function called" << endl;
    return _raw;
}

void Fixed::setRawBits(int raw)
{
    _raw = raw;
}
