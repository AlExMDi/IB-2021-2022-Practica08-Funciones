/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 2
 * Introduce different numbers and it will tell you if they are or not primes
 */


#include <iostream>
#include <cmath>

bool Prime(const int number) {

bool isPrime = true;
if (number == 1 || number == 0) {
  return isPrime = false;
}
for (int i = 2; i <= sqrt (number); i++) {
  if (number % i == 0) {
    isPrime = false;
  }
}
  return isPrime;
}

int main () {
  int amount_numbers{0}, natural_number{0};
  std::cin >> amount_numbers;

  for (int i = 1; i <= amount_numbers; i++) {
    std::cin >> natural_number;
    if (Prime(natural_number) == true) {
      std::cout << natural_number << " is prime" << std::endl;
    } else {
      std::cout << natural_number << " is not prime" << std::endl;
    }
  }
  return 0;
}