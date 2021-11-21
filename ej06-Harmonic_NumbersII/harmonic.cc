/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 5
 * Introduce two numbers and it will substract their
 * two harmonic numbers
 *
 */

#include <iomanip>
#include <iostream>


double NThHarmonic(const int kNumber1, const int kNumber2) {
  double harmonic{0};

  for (int i = kNumber2 + 1; i <= kNumber1; i++) {
    harmonic += (double)1 / i;
    }
  
  return harmonic;
}

int main() {
  int number1{0}, number2{0};
  while (std::cin >> number1 >> number2) {
    std::cout << std::fixed << std::setprecision(10);
    std::cout << NThHarmonic(number1, number2) << std::endl;
  }
  return 0;
}
