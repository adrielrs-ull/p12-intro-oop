#include <iostream>

class Fecha {
 public:
  bool Bisiesto(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }
  return false;
  }

  bool is_valid_date(int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1800 || y > 9999) {
      return false;
    } else if (!Bisiesto(y) && m == 2 && d > 28) {
      return false;
    } else if (m == 2 && d > 29) {
      return false;
    } else if ((m <= 7 && m % 2 == 0 && d > 30) || (m > 7 && m % 2 != 0 && d > 30)) {
      return false;
    }
    return true;
  }
  Fecha(int day, int month, int year) {
    if (is_valid_date(day, month, year)) {
      day_ = day;
      month_ = month;
      year_ = year;
    } else {
      std::cout << "El año no es válido" << std::endl;
    }
  }
  void Print() {
    if (is_valid_date(day_, month_, year_)) {
      std::cout << "La fecha es: " << day_ << " " << month_ << " " << year_ << std::endl;
    } else {
      std::cout << "Como la fecha no es válida no la puedo mostrar" << std::endl;
    }
  }
  int GetDay() {return day_;}
  int GetMonth() {return month_;}
  int GetYear() {return year_;}
  
 private:
  int day_;
  int month_;
  int year_;
};

int main(int argc, char* argv[]) {
  int day = std::stoi(argv[1]);
  int month = std::stoi(argv[2]);
  int year = std::stoi(argv[3]);
  Fecha fecha{day, month, year};
  fecha.Print(); 
}