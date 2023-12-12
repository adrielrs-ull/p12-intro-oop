#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
//Declaro simplemten los métodos de la clase y las variables en privado
class Complejo {
 public:
  Complejo();
  Complejo(double real, double imaginario);
  Complejo operator+(const Complejo& other) const;
  Complejo operator-(const Complejo& other) const;
  friend std::ostream& operator<<(std::ostream& os, const Complejo& complejo);
  friend std::istream& operator>>(std::istream& is, Complejo& complejo);
 private:
  double real_;
  double imaginario_;
};

#endif 