#include <iostream>

using namespace std;

const int HOUR_OF_DAY = 24;
const int MINUTE_OF_HOUR = 60;

int main() {
  int hour, minute, cookingminute;
  cin >> hour >> minute >> cookingminute;

  int totalminute = MINUTE_OF_HOUR * hour + minute + cookingminute;
  int endhour = (totalminute / MINUTE_OF_HOUR) % HOUR_OF_DAY;
  int endminute = totalminute % MINUTE_OF_HOUR;

  cout << endhour << ' ' << endminute << '\n';
}