/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 2
 * Introduce different numbers and their divisors will appear
 */

#include <cmath>
#include <iostream>

void Order(int number) {
  std::cout << "divisors of " << number << ":";
  for (int i = 1; i < sqrt(number); i++) {
    if (number % i == 0) {
      std::cout << " " << i;
    }
  }
  for (int j = sqrt(number); j > 0; --j)
    if (number % j == 0) {
      std::cout << " " << number / j;
    }
  std::cout << std::endl;
}

int main() {
  int number{0};
  while (std::cin >> number) {
    Order(number);
  }
  return 0;
}
