#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> scores(n);

  for (int i = 0; i < n; i++) {
    cin >> scores[i];
  }

  int maxScore = *max_element(scores.begin(), scores.end());
  double total = 0;

  for (double score : scores) {
    total += (score / maxScore * 100);
  }

  cout << total / n << "\n";
}