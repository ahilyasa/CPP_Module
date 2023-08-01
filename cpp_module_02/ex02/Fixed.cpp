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

Fixed &Fixed::min(Fixed &fixedA, Fixed &fixedB) {
	return fixedA._raw < fixedB._raw ? fixedA : fixedB;
}

const Fixed &Fixed::min(const Fixed &fixedA, const Fixed &fixedB) {
	return fixedA._raw < fixedB._raw ? fixedA : fixedB;
}

Fixed &Fixed::max(Fixed &fixedA, Fixed &fixedB) {
	return fixedA._raw > fixedB._raw ? fixedA : fixedB;
}

const Fixed &Fixed::max(const Fixed &fixedA, const Fixed &fixedB) {
	return fixedA._raw > fixedB._raw ? fixedA : fixedB;
}

bool Fixed::operator>(const Fixed &other) {
	return this->_raw > other._raw;
}

bool Fixed::operator<(const Fixed &other) {
	return this->_raw < other._raw;
}

bool Fixed::operator>=(const Fixed &other) {
	return this->_raw >= other._raw;
}

bool Fixed::operator<=(const Fixed &other) {
	return this->_raw <= other._raw;
}

bool Fixed::operator!=(const Fixed &other) {
	return this->_raw != other._raw;
}

bool Fixed::operator==(const Fixed &other) {
	return this->_raw == other._raw;
}

Fixed Fixed::operator+(const Fixed &other) {
	this->_raw += other._raw;
	return *this;
}

Fixed Fixed::operator-(const Fixed &other) {
	this->_raw -= other._raw;
	return *this;
}

Fixed Fixed::operator*(const Fixed &other) {
	this->_raw *= other.toInt();
	return *this;
}

Fixed Fixed::operator/(const Fixed &other) {
	this->_raw = this->toInt() * other.toFloat();
	return *this;
}

Fixed Fixed::operator++() {
	this->_raw++;
	return *this;
}

Fixed Fixed::operator--() {
	this->_raw--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_raw++;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_raw--;
	return tmp;
}