/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief Este archivo ".h" declara la clase cilindroy sus métdos
  * @bug There are no known bugs
  * 
  */

#ifndef CILINDRO_H
#define CILINDRO_H

#include <iostream>

/**
 * @class Cilindro
 * @brief Declaración de la clase Cilindro y de sus métodos y atributos
 */

class Cilindro {
 public:
  Cilindro();
  Cilindro(const double& altura, const double& radio);
  double AreaCilindro();
  double VolumenCilindro();
 private:
  double altura_;
  double radio_;
};

#endif 