#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  int sum = 0;
  for (char num : s) {
    sum += (num - '0');
  }

  cout << sum << "\n";
}