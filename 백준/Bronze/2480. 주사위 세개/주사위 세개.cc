#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int prize;

  if (a == b && a == c) {
    prize = 10000 + a * 1000;
  } else if (a != b && a != c && b != c) {
    int maxVal = a;
    if (b > maxVal)
      maxVal = b;
    if (c > maxVal)
      maxVal = c;

    prize = maxVal * 100;
  } else {
    if (a == b || a == c) {
      prize = 1000 + a * 100;
    } else {
      prize = 1000 + b * 100;
    }
  }

  cout << prize << '\n';
}