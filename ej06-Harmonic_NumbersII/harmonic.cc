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


#include <iostream>
#include <iomanip>

double nthHarmonic(const int number) {
  double harmonic = 1.00;
  for (int i = 1; i <= number; i++) {
    harmonic += (double)1 / i;
  }
  return harmonic;
}


int main() {
  int number1{0},number2{0};
  double substraction;
  std::cin >> number1 >> number2;
    substraction = nthHarmonic(number1) -  nthHarmonic(number2);
    std::cout << std::fixed << std::setprecision(10) << substraction << std::endl;
  

  return 0;
}
