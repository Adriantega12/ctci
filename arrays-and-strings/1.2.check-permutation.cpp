#include <iostream>
#include <algorithm>

using namespace std;

bool checkPermutation(string s1, string s2) {
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return s1 == s2;
}

int main(int argc, char const *argv[]) {
  if (argc < 3) {
    cout << "Need more arguments" << endl;
    return 1;
  }
  cout << checkPermutation(string(argv[1]), string(argv[2])) << endl;
  return 0;
}
