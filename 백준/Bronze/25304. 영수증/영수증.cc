#include <iostream>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;

  int totalPrice = 0;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    totalPrice += (a * b);
  }

  cout << (x == totalPrice ? "Yes" : "No") << '\n';
}