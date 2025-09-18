#include <iostream>

using namespace std;

int main() {
  int num, maxIndex;
  int maxValue = 101;

  for (int i = 0; i < 9; i++) {
    cin >> num;

    if (maxValue == 101) {
      maxValue = num;
      maxIndex = i + 1;
    }

    if (num > maxValue) {
      maxValue = num;
      maxIndex = i + 1;
    }
  }

  cout << maxValue << "\n" << maxIndex << "\n";
}