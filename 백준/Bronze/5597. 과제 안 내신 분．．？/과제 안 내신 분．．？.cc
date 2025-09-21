#include <iostream>

using namespace std;

int main() {
  bool students[30] = {
      0,
  };

  for (int i = 0; i < 28; i++) {
    int n;
    cin >> n;

    students[n - 1] = true;
  }

  for (int i = 0; i < 30; i++) {
    if (students[i]) {
      continue;
    }

    cout << i + 1 << "\n";
  }
}