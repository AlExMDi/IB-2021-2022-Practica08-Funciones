/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Morales Díaz
 * @date 19.nov.2021
 * @brief Practica 8. Ejercicio 4
 * Introduce a sentence or a word and if it appears an 'a' it will
 * print yes, if not, no

*/

#include <cstring>
#include <iostream>

void Containsletter(std::string sentence) {
  char letter = 'a';
  getline(std::cin, sentence);
  if (sentence.find(letter) != std::string::npos) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}

int main() {
  char letter = 'a';
  std::string sentence = "";
  // std::cout << "Introduce una frase" << std::endl´
  Containsletter(sentence);
  return 0;
}
