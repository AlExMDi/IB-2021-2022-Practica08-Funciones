/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 5
 * Introduce a number and it will print it's harmonic number
 * 
*/

#include <iostream>
#include <bits/stdc++.h>


double nthHarmonic(const int number) {
  double harmonic = 1.00;
  for (int i = 2; i <= number; i++) {
    harmonic += (double)1 / i;
  
  }
  if (number == 0){
    std::cout << "0.0000" << std::endl;
  } else {
  std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;
  
}
  return harmonic;
}

int main() {
  int number{0};
  std::cin >> number;
  nthHarmonic(number);

  return 0;
}