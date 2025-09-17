#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int numArr[10000];

  int n, x;
  cin >> n >> x;

  for (int i = 0; i < n; i++) {
    cin >> numArr[i];
  }

  for (int i = 0; i < n; i++) {
    if (numArr[i] < x)
      cout << numArr[i] << ' ';
  }

  cout << '\n';
}