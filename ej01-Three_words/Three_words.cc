#include <iostream>
#include <algorithm>
#include <vector>

void Order(std::string word1, std::string word2, std::string word3) {
  std::string arr[] = {word1,word2,word3};
  std::sort(arr.begin(), arr.end());
  std::cout << arr;

}

int main () {
  std::string word1,word2,word3;
  std::cin >> word1 >> word2 >> word3;
  Order(word1,word2,word3);
  
  return 0;
}