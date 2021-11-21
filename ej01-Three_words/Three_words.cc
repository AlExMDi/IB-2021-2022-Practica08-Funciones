/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 2
 * Introduce three words and they will appear in reverse order

*/

#include <iostream>

int main() {
  std::string palabra1{0}, palabra2{0}, palabra3{0};
  std::cin >> palabra1 >> palabra2 >> palabra3;
  std::cout << palabra3 << " " << palabra2 << " " << palabra1 << std::endl;

  return 0;
}