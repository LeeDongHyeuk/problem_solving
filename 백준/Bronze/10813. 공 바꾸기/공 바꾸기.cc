#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  int bag[101] = {};

  for (int i = 1; i <= n; i++) {
    bag[i] = i;
  }

  for (int step = 1; step <= m; step++) {
    int i, j;
    cin >> i >> j;

    int temp = bag[i];
    bag[i] = bag[j];
    bag[j] = temp;
  }

  for (int i = 1; i <= n; i++) {
    cout << bag[i] << " ";
  }

  cout << "\n";
}