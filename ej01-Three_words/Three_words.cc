/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 1

*/

#include <algorithm>
#include <iostream>
#include <vector>

void Order(std::string word1, std::string word2, std::string word3) {
  std::string arr[] = {word1, word2, word3};
  std::sort(arr.begin(), arr.end());
  std::cout << arr;
}

int main() {
  std::string word1, word2, word3;
  std::cin >> word1 >> word2 >> word3;
  Order(word1, word2, word3);

  return 0;
}