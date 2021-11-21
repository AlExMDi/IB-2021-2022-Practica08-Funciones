
#include <iostream>

bool Even (int number) {
  bool isEven{true};
  if (number % 2 == 0) {
  } else {
    isEven = false;
  }
  return isEven;
}

int main() {
  int number{0},position{1};

  while (std::cin >> number) {
    if (Even(number) == true) {
      std::cout << position << std::endl;
      break;
    } else {
      ++position;
    }
  }
  return 0;
}