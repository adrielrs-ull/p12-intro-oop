/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Dic 13 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa imprime por pantalla el area y volumen de un objeto cilindro
  * @bug There are no known bugs
  * 
  */

#include <iostream>
#include <cmath>
#include "cilindro.h"

int main() {
  Cilindro cilindro(10, 2);
  std::cout << "El Area del cilindro es: " << cilindro.AreaCilindro() << std::endl;
  std::cout << "El Volumen del cilindro es: " << cilindro.VolumenCilindro() << std::endl;
  return 0;
}