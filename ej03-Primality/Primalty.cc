#include <iostream>

int GenerateNumbers(int number) {
  int arr[number],i{0};
  
  for (i = 0; i < number; i++) 
  std::cin >> arr[i];
  return arr[i];
}

void PrimeNumbers(int natural_numbers) {
  int count{0};
  bool isPrime = true;  

  for (int j = 2; j <= natural_numbers/2; j++) {
    if (natural_numbers % j == 0) {
      count = 1;
      break;
    }
  }

  if (natural_numbers == 1 || natural_numbers == 0) {
    isPrime = false;

  } else {
      if (count == 0) {
        std::cout << natural_numbers << " is a prime number" << std::endl;
      } else {
        std::cout << natural_numbers << " is a not prime number" <<std::endl;
      }
    }
}


    int main() {
      int natural_numbers{0}, number{0};
      std::cin >> number;
      std::cin >> natural_numbers;
      // std::cout << "How many numbers would you loke to introduce:"
      GenerateNumbers(number);
      PrimeNumbers(natural_numbers);

      return 0;
    }
