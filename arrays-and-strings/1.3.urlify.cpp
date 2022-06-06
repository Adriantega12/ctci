#include <iostream>

using namespace std;

string urlify(string s) {
  string urlified = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      int j = i + 1;
      for (; j < s.length(); j++) {
        if (s[j] != ' ') {
          break;
        }
      }
      i = j - 1;
      if (i < s.length() - 1) {
        urlified += "%20";
      }
    } else {
      urlified += s[i];
    }
  }
  return urlified;
}

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    cout << "Need more arguments" << endl;
    return 1;
  }
  cout << urlify(string(argv[1])) << endl;
  return 0;
}
