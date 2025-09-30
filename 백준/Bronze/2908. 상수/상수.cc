#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  int str_a = stoi(a);
  int str_b = stoi(b);

  cout << (str_a > str_b ? str_a : str_b) << "\n";
}