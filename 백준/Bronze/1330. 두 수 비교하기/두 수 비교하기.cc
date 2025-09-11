#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int a, b;

  cin >> a >> b;

  if (a > b) {
    cout << ">\n";
  }

  if (a < b) {
    cout << "<\n";
  }

  if (a == b) {
    cout << "==\n";
  }

  return 0;
}