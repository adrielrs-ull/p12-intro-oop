#include "complejo.h"
#include <cmath>

Complejo::Complejo() : real_(0.0), imaginario_(0.0) {}
Complejo::Complejo(double real, double imaginario) : real_(real), imaginario_(imaginario) {}
Complejo Complejo::operator+(const Complejo& other) const {
  return Complejo(real_ + other.real_, imaginario_ + other.imaginario_);
}
Complejo Complejo::operator-(const Complejo& other) const {
  return Complejo(real_ - other.real_, imaginario_ - other.imaginario_);
}
std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {
  os << complejo.real_;
  if (complejo.imaginario_ >= 0) {
    std::cout << "+" << complejo.imaginario_ << "i";
  } else {
    std::cout << "-" << std::abs(complejo.imaginario_) << "i";
  }
  return os;
}
std::istream& operator>>(std::istream& is, Complejo& complejo) {
  is >> complejo.real_ >> complejo.imaginario_;
  return is;
}

