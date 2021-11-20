#include <iostream>
#include <bits/stdc++.h>

// falta redondear
// Problema con el número 0s
// Y cuando no tiene decimales añadir cuatro 0, si tiene un decimal 3, etc.

double nthHarmonic(const int number) {
  float harmonic = 1.00;
  for (int i = 2; i <= number; i++) {
    harmonic += (float)1 / i;
  
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