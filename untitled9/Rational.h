#ifndef RATIONAL_H
#define RATIONAL_H

#endif // RATIONAL_H
#include <iostream>
class Rational {
public:
    Rational(int num = 0, int den = 1);
    void set(int num, int den);
    int num() const;
    int den() const;
    void set_num(int num);
    void set_den(int den);
    Rational add(const Rational &other) const;
    Rational subtract(const Rational &other) const;
    void print() const;
    Rational operator+(const Rational &rhs) const;
    Rational operator-(const Rational &rhs) const;
    Rational operator*(const Rational &rhs) const;
    friend std::ostream &operator<<(std::ostream &str, Rational &rhs);
    friend std::istream &operator>>(std::ostream &str, Rational &rhs);
    Rational(double r);
    operator double();
    int num_, den_;
};
