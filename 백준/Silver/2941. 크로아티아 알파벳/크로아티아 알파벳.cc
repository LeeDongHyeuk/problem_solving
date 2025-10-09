#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  string alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  int count = 0;

  while (word.compare("") != 0) {
    string two = word.substr(0, 2);
    string three = word.substr(0, 3);

    bool isDelete = false;

    for (int i = 0; i < 8; i++) {
      if (two.compare(alpha[i]) == 0) {
        count++;
        word = word.substr(2);
        isDelete = true;
        break;
      } else if (three.compare(alpha[i]) == 0) {
        count++;
        word = word.substr(3);
        isDelete = true;
        break;
      }
    }

    if (!isDelete) {
      count++;
      word = word.substr(1, word.length());
    }
  }

  cout << count << "\n";
}