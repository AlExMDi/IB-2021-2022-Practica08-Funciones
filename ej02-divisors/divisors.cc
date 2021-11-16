/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 2

*/

#include <iostream>

void Order(int number) {
  while (std::cin >> number) {
    std::cout << "divisors of " << number << ": ";
    for (int i = 1; i <= number; ++i){
      if (number % i == 0) {
        std::cout << i << " ";
      }
    } 
  std::cout << std::endl;  
  }
} 


int main() {
  int number{0};
  Order(number);

  return 0;
}