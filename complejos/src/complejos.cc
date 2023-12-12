#include <iostream>
#include "complejo.h"

int main(int argc, char* argv[]) {
  double real1 = std::stod(argv[1]), real2 = std::stod(argv[3]);
  double imaginario1 = std::stod(argv[2]), imaginario2 = std::stod(argv[4]);
  Complejo complejo1{real1, imaginario1}, complejo2{real2, imaginario2};
  Complejo resultado;
  resultado = complejo1 + complejo2;
  std::cout << resultado << std::endl;
  resultado = complejo1 - complejo2;
  std::cout << resultado << std::endl;
}