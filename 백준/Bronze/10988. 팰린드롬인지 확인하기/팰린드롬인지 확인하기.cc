#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  for (int i = 0; i < word.length() / 2; i++) {
    if (word[i] != word[word.length() - i - 1]) {
      cout << 0 << "\n";
      return 0;
    }
  }

  cout << 1 << "\n";
}
