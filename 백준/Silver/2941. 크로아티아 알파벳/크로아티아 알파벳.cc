#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  string alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  for (int i = 0; i < 8; i++) {
    while (true) {
      int findIndex = word.find(alpha[i]);

      if (findIndex == string::npos)
        break;

      word.replace(findIndex, alpha[i].length(), "#");
    }
  }

  cout << word.length() << "\n";
}