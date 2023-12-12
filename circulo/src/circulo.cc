/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa muestra por pantalla tanto el radio como el centro y color de un circulo, y si un punto se encuentra dentro o no
  * @bug There are no known bugs
  * 
  */

#include <iostream>
#include <cmath>
#include <cctype>

enum Color {rojo, azul, amarillo, verde, otro}; //La enumeración de los colores del círculo

/**
 * @brief Esta parte de la enumeración asigna un color dependiendo de qué cadena de texto se ha introducido, puesto que no le puedo asignar una cadena de texto a un tipo Color
 * @param Toma como parámetros una referencia constante a una variable colorStr que tiene el valor del prámetro pasado por terminal
 * @return Devuelve el color dependiendo del parámetro
 */

Color AsignarColor(const std::string& colorStr) {
  if (colorStr == "rojo") {
    return Color::rojo;
  } else if (colorStr == "azul") {
    return Color::azul;
  } else if (colorStr == "amarillo") {
    return Color::amarillo;
  } else if (colorStr == "verde") {
    return Color::verde;
  } else {
    return Color::otro;
  }
}

/**
 * @brief La clase circulo contiene toda la infor acerca de él, tanto el centro como el radio y el color
 * @param Toma como parámetros los asignados en el main
 */

class Circulo {
 public:
  Circulo(double x, double y, double radio, Color color) : x_(x), y_(y), radio_(radio), color_(color) {}
  double GetX() {return x_;}
  double GetY() {return y_;}
  double Area() { //Esta función devuelve el area del circulo
   return M_PI * radio_ * radio_;
  }
  double Perimetro() { // Perimetro devuelve el perimetro de la funcion 
   return 2.0 * M_PI * radio_;
  }
  void Print() {
   std::cout << "El centro del círculo es (" << x_ << ", " << y_ << ")" << std::endl;
   std::cout << "El radio del círculo es " << radio_ << std::endl;
   std::cout << "Color: ";
   switch (color_) {
     case rojo:
       std::cout << "rojo";
       break;
     case amarillo:
       std::cout << "amarillo";
       break;
     case verde:
       std::cout << "verde";
       break;
     case azul:
       std::cout << "azul";
       break;
     default:
       std::cout << "Otro";
   }
   std::cout << std::endl;
  }
  bool EsInterior(double punto_x, double punto_y) { //Esta funcion comprueba si un punto está dentro del circulo dependiendo de la distancia de este al circulo y si es menor al radio
    return std::sqrt((x_ - punto_x) * (x_ - punto_x) + (y_ - punto_y) * (y_ - punto_y)) <= radio_;
  }

 private:
  double x_;
  double y_;
  double radio_;
  Color color_;
};

int main(int argc, char* argv[]) {
  double x = std::stod(argv[1]);
  double y = std::stod(argv[2]);
  double radio = std::stod(argv[3]);
  std::string colorStr = argv[4];
  Color color = AsignarColor(colorStr);
  Circulo circulo = Circulo(x, y, radio, color);
  std::cout << "El area es: " << circulo.Area() << std::endl;
  std::cout << "El perimetro es: " << circulo.Perimetro() << std::endl;
  circulo.Print();
  if (circulo.EsInterior(2.0, 2.0)) {
    std::cout << "El punto está dentro del circulo" << std::endl;
  } else {
    std::cout << "El punto está fuera del circulo" << std::endl;
  }
}