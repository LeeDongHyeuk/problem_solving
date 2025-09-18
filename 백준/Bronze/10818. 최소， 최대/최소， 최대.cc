#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int num;
  int minValue = 1000001;
  int maxValue = -1000001;

  for (int i = 0; i < n; i++) {
    cin >> num;

    if (num > maxValue)
      maxValue = num;
    if (num < minValue)
      minValue = num;
  }

  cout << minValue << " " << maxValue << "\n";
}