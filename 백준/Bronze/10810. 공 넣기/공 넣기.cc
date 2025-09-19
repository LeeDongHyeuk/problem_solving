#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  int bag[101] = {};

  for (int round = 0; round < m; round++) {
    int i, j, k;
    cin >> i >> j >> k;

    for (int basket = i; basket <= j; basket++) {
      bag[basket] = k;
    }
  }

  for (int index = 1; index <= n; index++) {
    cout << bag[index] << " ";
  }

  cout << "\n";
}