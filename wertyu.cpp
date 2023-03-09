#include <iostream>
#include <string>

int main() {
  std::string keys{"qwertyuiop[]\\{}|asdfghjkl;':\"zxcvbnm,./<>?"};
  std::cout << keys[12];
  std::string input;
  std::string output{};

  std::cout << "Enter a string: ";
  std::getline(std::cin, input);
  std::cout << input << std::endl;
  for (int i = 0; input[i] != '\0'; i++) {
    if (input[i] == ' ') {
      output += " ";
    } else {
      int index = keys.find(input[i]);
      // std::cout << "index: " << index << std::endl;
      output += keys[index - 1];
    }
  }
  output += '\0';
  std::cout << output << std::endl;
}
