#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, r;
  string s;

  cin >> t;

  while (t--) {
    cin >> r >> s;

    for (char c : s) {
      for (int i = 0; i < r; i++) {
        cout << c;
      }
    }

    cout << "\n";
  }
}