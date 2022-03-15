#include <iostream>
#include <string>
#include "Rational.h"

Rational::Rational(int num, int den) : num_(num) { // initializes num_ field with num value
    if (den) {
        den_ = den;
    } else {
        den_ = 1;
    }
}

void Rational::set(int num, int den) {
    num_ = num;
    if (den) {
        den_ = den;
    }
}

int Rational::num() const {
    return num_;
}

int Rational::den() const {
    return den_;
}

void Rational::set_num(int num) {
    num_ = num;
}

void Rational::set_den(int den) {
    if (den) {
        den_ = den;
    }
}

Rational Rational::add(const Rational &other) const {
    return Rational(num_ * other.den_ + other.num_ * den_,
                    den_ * other.den_);
}

Rational Rational::subtract(const Rational &other) const {
    return Rational(num_ * other.den_ - other.num_ * den_,
                    den_ * other.den_);
}

void Rational::print() const {
    if (den_ == 1) {
        std::cout << num_;
    } else {
        std::cout << num_ << "/" << den_;
    }
}
Rational Rational::operator+(const Rational &rhs) const {
    return Rational(num_ * rhs.den_ + rhs.num_ * den_,
                    den_ * rhs.den_);
}

Rational Rational::operator-(const Rational &rhs) const {
    return Rational(num_ * rhs.den_ - rhs.num_ * den_,
                    den_ * rhs.den_);
}

Rational Rational::operator*(const Rational &rhs) const {
    return Rational(num_ * rhs.den_ * rhs.num_ * den_,
                    den_ * rhs.den_);
}

std::ostream &operator<<(std::ostream &str, Rational &rhs){
    if (rhs.den_ == 1) {
        str << rhs.num_;
    } else {
        str << rhs.num_ << "/" << rhs.den_;
    }
    return str;
}

std::istream &operator >> (std::istream &str, Rational &rhs){
   std::string tmp;
   str >> tmp;
   size_t pos;
   pos = tmp.find('/');
   if(pos != std::string::npos){
       rhs.set_num(stoi(tmp.substr(0,pos)));
       rhs.set_num(stoi(tmp.substr(0,pos+1)));
   }
   else{
       rhs.set_num(stoi(tmp));
       rhs.set_den(1);
   }
}

Rational::Rational(double r) {
    int den = 1;
    int it = 0;
    while ((r != (int)r)&&(it<9)){
        den *= 10;
        r *= 10;
        it++;
    }
    num_ = r;
    den_ = den;
}

Rational::operator double(){
    return (double)num_ / (double)den_;
}
