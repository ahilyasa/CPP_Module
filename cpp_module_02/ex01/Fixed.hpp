#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Fixed {
    private:
        int _raw;
        static const int _rawBit = 8;
    public:
        Fixed ();
        Fixed (const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int raw);
        
        Fixed(const int fixedNumber);
        Fixed(const float fixedNumber);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif