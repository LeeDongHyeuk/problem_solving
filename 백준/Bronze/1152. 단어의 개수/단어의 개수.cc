#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  if (s.length() == 1 && s[0] == ' ') {
    cout << 0 << "\n";
    return 0;
  }

  int count = 1;

  for (int i = 1; i < s.length() - 1; i++) {
    if (s[i] == ' ')
      count++;
  }

  cout << count << "\n";
}