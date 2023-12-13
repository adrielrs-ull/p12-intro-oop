/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa define los métodos definidios en el ".h"
  * @bug There are no known bugs
  * 
  */

#include <iostream>
#include <cmath>
#include "cilindro.h"
/**
 * @brief El constructor por defecto asignará el valor 0.0 y 0.0 en caso de que no se pase ningún valor 
 */

Cilindro::Cilindro() : altura_{1.0}, radio_{1.0} {}

/**
 * @brief Declaro los atributos pasados por referencia constante al radio_ y altura_
 * @param Toma los parámetros de altura y radio
 */
Cilindro::Cilindro(const double& altura, const double& radio) : altura_{altura}, radio_{radio} {}

/**
 * @brief La función calcula el area del cilindro usando el radio y altura
 * @param Toma la altura y radio
 * @returm Retorna el area
 */
double Cilindro::AreaCilindro() {
  return 2 * M_PI * (radio_ + altura_);
}

/**
 * @brief La función calcula el volumen del cilindro usando el radio y la altura
 * @param Toma la altura y radio
 * @returm Retorna el volumen
 */
double Cilindro::VolumenCilindro() {
  return M_PI * radio_ * radio_ * altura_;
}
