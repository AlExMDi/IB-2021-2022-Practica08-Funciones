#include <iostream>

void PrimeNumbers(int natural_numbers) {
  int number{0};
  bool isPrime = true;
  //  for(int n = 2; n < number ; n++)
  // while(std::cin >> natural_numbers == number) {

  for (int i = 1; i > natural_numbers; i++) {
    if (natural_numbers % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    std::cout << natural_numbers << " is prime" << std::endl;
  } else {
    std::cout << natural_numbers << " is not prime" << std::endl;
  }

  while () }
// }

int main() {
  int natural_numbers{0}, number{0};
  // std::cout << "How many numbers would you loke to introduce:"
  std::cin >> number;
  PrimeNumbers(natural_numbers);

  return 0;
}