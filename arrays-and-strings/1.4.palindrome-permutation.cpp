#include <iostream>
#include <algorithm>

using namespace std;

bool palindromePermutation(string s) {
  int alphabet[256] = {0};
  for (int i = 0; i < s.length(); i++) {
    if (isalpha(s[i])) {
      alphabet[tolower(s[i])]++;
    }
  }
  int oddCount = 0;
  for (int i = 0; i < 256; i++) {
   if (alphabet[i] % 2 == 1) {
     oddCount++;
   } 
  }
  return oddCount == 1;
}

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    cout << "Need more arguments" << endl;
    return 1;
  }
  cout << palindromePermutation(string(argv[1])) << endl;
  return 0;
}
