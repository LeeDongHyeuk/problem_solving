#include <iostream>

using namespace std;

int main() {
  bool remainder[42] = {
      0,
  };

  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;

    remainder[n % 42] = true;
  }

  int result = 0;

  for (bool value : remainder) {
    if (value) {
      result++;
    }
  }

  cout << result << "\n";
}