#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers {
  class Complex {
   public:
    Complex();
    Complex(double real, double imag);
    double real() const;
    double imag() const;
    double abs() const;
    Complex conj() const;
    Complex exp() const;

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    bool operator==(const Complex& other) const;

   private:
    double real_part;
    double imag_part;
  };
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
