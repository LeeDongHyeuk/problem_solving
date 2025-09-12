#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int hour, minute;

  cin >> hour >> minute;

  minute -= 45;

  if (minute < 0) {
    hour--;
    minute = 60 + minute;
  }

  if (hour < 0) {
    hour = 23;
  }

  cout << hour << ' ' << minute << '\n';

  return 0;
}