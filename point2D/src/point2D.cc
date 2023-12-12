#include <iostream>
#include <cmath>
#include <iomanip>

class Point2D {
 public:
  Point2D(int x, int y) : x_(x),  y_(y) {}
  double Show_x() {return x_;}
  double Show_y() {return y_;}
  void Move(int x, int y) {
    x_ = x;
    y_ = y;
  }
  double Distance(const Point2D& other) {
    double deltaX = x_ - other.x_;
    double deltaY = y_ - other.y_;
    return std::sqrt(deltaX * deltaX + deltaY * deltaY);
  } 
  Point2D Middle(const Point2D& other) {
    double middle_x = (x_ + other.x_) / 2.0;
    double middle_y = (y_ + other.y_) / 2.0;
    return Point2D(middle_x, middle_y);
  }
 private:
  double x_;
  double y_;
};

int main() {
  Point2D coordenada1 = Point2D(1.0, 2.0);
  Point2D coordenada2 = Point2D(2.0, 4.0);
  std::cout << coordenada1.Show_x() << std::endl;
  coordenada1.Move(3.0, 6.0);
  std::cout << coordenada1.Show_x() << std::endl;
  double distancia = coordenada1.Distance(coordenada2);
  std::cout << std::fixed << std::setprecision(1) << distancia << " distancia" << std::endl;
  Point2D middle = coordenada1.Middle(coordenada2);
  std::cout << middle.Show_x() << " " << middle.Show_y() << std::endl;
  return 0;
}