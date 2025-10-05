#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  int count[26] = {
      0,
  };

  int maxCount = -1;
  char result;

  for (int i = 0; i < word.length(); i++) {
    if (word[i] >= 'a' && word[i] <= 'z') {
      word[i] = word[i] - 'a' + 'A';
    }

    if (++count[word[i] - 'A'] > maxCount) {
      maxCount = count[word[i] - 'A'];
      result = word[i];
    }
  }

  int check = 0;
  for (int value : count) {
    if (value == maxCount) {
      check++;
    }
  }

  cout << (check > 1 ? '?' : result) << '\n';
}