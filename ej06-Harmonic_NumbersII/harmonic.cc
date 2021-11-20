#include <iostream>
#include <iomanip>

double nthHarmonic(int number1) {
  double harmonic = 1.00;
  if (number1 == 0) {
  harmonic = 0;
  } else {
  for (int i = 2; i <= number1; i++) {
    harmonic += (double)1 / i;
  
  }

//   std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;
  
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
