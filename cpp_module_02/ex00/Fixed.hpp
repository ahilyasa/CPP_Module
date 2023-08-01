#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>

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
};

#endif