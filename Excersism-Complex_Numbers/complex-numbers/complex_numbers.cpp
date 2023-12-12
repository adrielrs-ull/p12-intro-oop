#include "complex_numbers.h"
#include <cmath>

namespace complex_numbers {
  Complex::Complex() : real_part(0.0), imag_part(0.0) {}
  Complex::Complex(double real, double imag) : real_part(real), imag_part(imag) {}
  double Complex::real() const {return real_part;}
  double Complex::imag() const {return imag_part;}
  double Complex::abs() const {return std::sqrt(real_part * real_part + imag_part * imag_part);}
  Complex Complex::conj() const {return Complex(real_part, -1 * imag_part);}
  Complex Complex::exp() const {
    double cos_part = std::cos(this->imag());
    double sin_part = std::sin(this->imag());
    cos_part = std::abs(cos_part) < 1e-15 ? 0 : cos_part;
    sin_part = std::abs(sin_part) < 1e-15 ? 0 : sin_part;
    double real_part = std::exp(this->real()) * cos_part;
    double imag_part = std::exp(this->real()) * sin_part;
    return Complex(real_part, imag_part);
  }
   Complex Complex::operator+(const Complex& other) const
    {
        double real_part = this->real() + other.real();
        double imag_part = this->imag() + other.imag();
        return Complex(real_part, imag_part);
    }
    Complex Complex::operator-(const Complex& other) const
    {
        double real_part = this->real() - other.real();
        double imag_part = this->imag() - other.imag();
        return Complex(real_part, imag_part);
    }
    Complex Complex::operator*(const Complex& other) const
    {
        double real_part = this->real() * other.real() - this->imag() * other.imag();
        double imag_part = this->imag() * other.real() + this->real() * other.imag();
        return Complex(real_part, imag_part);
    }
    Complex Complex::operator/(const Complex& other) const
    {
        double real_part = (this->real() * other.real() + this->imag() * other.imag()) / (std::pow(other.real(), 2) + std::pow(other.imag(), 2));
        double imag_part = (this->imag() * other.real() - this->real() * other.imag()) / (std::pow(other.real(), 2) + std::pow(other.imag(), 2));;
        return Complex(real_part, imag_part);
    }
    bool Complex::operator==(const Complex& rhs) const
    {
        return this->real() == rhs.real() && this->imag() == rhs.imag();
    }

}  // namespace complex_numbers
