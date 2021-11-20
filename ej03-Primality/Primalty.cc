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
      std::cout << "1 is a not prime number" << std::endl;

    } else if (natural_numbers == 0) {
      isPrime = false;
      std::cout << "0 is a not prime number" << std::endl;
    }
  } else {
    if (count == 0) {
      std::cout << natural_numbers << " is a prime number" << std::endl;
    } else {
      std::cout << natural_numbers << " is not a prime number" << std::endl;
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
