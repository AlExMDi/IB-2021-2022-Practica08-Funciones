#include <iostream>
#include <stdbool.h>
#include <stdio.h>

bool Balanced(char expression[]) {
  bool balance = true;
  int count = 0;

  for (int i = 0; expression[i] != '\0'; i++) {
    if (expression[i] == '(') {
      count++;
    } else {
      count--;
    }
    if (count < 0) {
      balance = false;
      break;
    }
  }

  if (count != 0) {
    balance = false;
  }

  return balance;
}

int main() {
  // std::cout << "Introduzca una secuencia de paréntesis: ";
  char expression1[0];
  std::cin >> expression1;

  if (Balanced(expression1)) {
    std::cout << "Balanced \n";
  } else {
    std::cout << "Not Balanced \n";
  }
  return 0;
}
