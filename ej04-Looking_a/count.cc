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
