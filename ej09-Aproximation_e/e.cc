#include <iomanip>
#include <iostream>

double Exponential(int number, double x) {
  double suma{1.0f};
  for (int i = number - 1; i > 0; --i) {
    suma = 1 + x * suma / i;
  }
  if (number == 0) {
    std::cout << "With " << number << " term(s) we get 0.00000000.";
    std::cout << std::endl;

  } else {
    std::cout << "With " << number << " term(s) we get ";
    std::cout << std::fixed << std::setprecision(10) << suma << ".";
    std::cout << std::endl;
  }
  return suma;
}

int main() {
  double x{1.0f};
  int number{0};
  while (std::cin >> number) {
    Exponential(number, x);
  }
  return 0;
}