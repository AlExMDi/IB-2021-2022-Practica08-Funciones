/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 7
 * Introduce different several numbers and it will print the position of the 
 * first even number
 */
#include <iostream>

bool Even (int number) {
  bool isEven{true};
  if (number % 2 == 0) {
  } else {
    isEven = false;
  }
  return isEven;
}

int main() {
  int number{0},position{1};

  while (std::cin >> number) {
    if (Even(number) == true) {
      std::cout << position << std::endl;
      break;
    } else {
      ++position;
    }
  }
  return 0;
}