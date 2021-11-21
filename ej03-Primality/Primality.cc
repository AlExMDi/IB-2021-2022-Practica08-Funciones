/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 3
 * Introduce different and it will say if they are or no primes.
 */
#include <iostream>

void PrimeNumbers(int natural_numbers) {
  int count{0};
  bool isPrime = true;

  for (int j = 2; j <= natural_numbers / 2; j++) {
    if (natural_numbers % j == 0) {
      count = 1;
      break;
    }
  }
  if (natural_numbers == 1 || natural_numbers == 0) {
    if (natural_numbers == 1) {
      isPrime = false;
      std::cout << "1 is not prime " << std::endl;

    } else if (natural_numbers == 0) {
      isPrime = false;
      std::cout << "0 is not prime " << std::endl;
    }
  } else {
    if (count == 0) {
      std::cout << natural_numbers << " is prime number" << std::endl;
    } else {
      std::cout << natural_numbers << " is not prime" << std::endl;
    }
  }
}

int main() {
  int number{0}, i{0}, n{0};
  // std::cout << "How many numbers would you loke to introduce:";
  std::cin >> number;
  int natural_numbers[number];
  // std::cout << "Introduzca los número que desee:";

  for (i = 0; i < number; i++) {
    std::cin >> natural_numbers[i];
    PrimeNumbers(natural_numbers[i]);
  }

  return 0;
}
