#include <iostream>
#include "Rational.h"

int main()
{
    Rational quarter(1, 4);
    Rational one_third(1, 3);

    Rational add_result, sub_result;
    add_result = one_third + quarter;
    sub_result = one_third - quarter;
    Rational rational;
    rational = one_third / quarter;
    std::cout << rational << std::endl;
//    one_third.print(); std::cout << " + "; quarter.print(); std::cout << " = "; add_result.print(); std::cout << std::endl;
//    one_third.print(); std::cout << " - "; quarter.print(); std::cout << " = "; sub_result.print(); std::cout << std::endl;

    return 0;
}
