/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 3
 * Introduce different numbers and it will tell you if they are or not primes
 */


/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  *
  * @author Alexander Morales Díaz
  * @date Nov 18 2021
  * @brief El programa lee una secuencia de numeros naturales e imprime para cada uno
  *        si es primo o no.
  */

#include <iostream>
#include <cmath>

bool Prime(const int kNumeroNatural) {
  bool isPrime = true;
  if (kNumeroNatural == 1 ||kNumeroNatural == 0) {
    return isPrime = false;
  }
  for (int i = 2; i <= sqrt(kNumeroNatural); ++i) {
    if (kNumeroNatural % i == 0) {
      return isPrime = false;
    }
  }
  return isPrime;
}

int main() {
  int amount_numbers(0), natural_number(0);
  std::cin >> amount_numbers;
  
  for (int i = 1; i <= amount_numbers; ++i) {
    std::cin >> natural_number;

    if (Prime(natural_number) == true) {
      std::cout << natural_number << " is prime" << std::endl;
    } else {
      std::cout << natural_number << " is not prime" << std::endl;
    }    
  }
  return 0;
}