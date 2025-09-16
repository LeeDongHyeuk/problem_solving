#include <iostream>

using namespace std;

int main() {
  int numArr[100];

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> numArr[i];
  }

  int v;
  cin >> v;

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (numArr[i] == v)
      count++;
  }

  cout << count << '\n';
}