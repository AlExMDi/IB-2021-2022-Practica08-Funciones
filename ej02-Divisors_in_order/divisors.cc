#include <iostream>


void Divisors (int numbers) { 
  int i = 0;
  while (std::cin >> numbers){
    std::cout << "divisors of " << numbers << ": ";
    for (i = 1; i <= numbers; ++i){
      if (numbers % i == 0){
        std::cout << i << " ";
      }
    }
      std::cout << std::endl; 
  }  
}

int main() {
  int numbers{0};
  Divisors(numbers);


  return 0;
}