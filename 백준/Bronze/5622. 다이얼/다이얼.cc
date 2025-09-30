#include <iostream>
#include <string>

using namespace std;

int main() {
  string tel;
  cin >> tel;

  int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6,  6,  6,  7,
                  7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

  int minTime = 0;

  for (char c : tel) {
    minTime += time[c - 'A'];
  }

  cout << minTime << "\n";
}