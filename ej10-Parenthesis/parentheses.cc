/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 10
 * Introduce a sequence of parentheses and it will say if it is balance or not
 */


#include <iostream>

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
    std::cout << "yes \n";
  } else {
    std::cout << "no \n";
  }
  return 0;
}
