#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int bag[101];

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    bag[i] = i;
  }

  for (int round = 0; round < m; round++) {
    int i, j;
    cin >> i >> j;

    for (int index = 0; index <= (j - i) / 2; index++) {
      int temp = bag[i + index];
      bag[i + index] = bag[j - index];
      bag[j - index] = temp;
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << bag[i] << " ";
  }

  cout << "\n";
}