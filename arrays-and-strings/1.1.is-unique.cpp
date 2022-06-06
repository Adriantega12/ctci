#include <iostream>

bool isUnique(std::string s) {
  bool alpha[256] = {false};
  for (int i = 0; i < s.length() ; ++i) {
    if (alpha[s[i]]) {
      return false;
    }
    alpha[s[i]] = true;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    std::cout << "Need more arguments" << std::endl;
    return 1;
  }
  std::cout << isUnique(std::string(argv[1])) << std::endl;
  return 0;
}
