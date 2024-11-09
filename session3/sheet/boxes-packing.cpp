#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; ++i)
    cin >> a[i];

  map<int, int> frequency;

  int max_frequency = 0;
  for (int i = 0; i < n; ++i) {
    int side = a[i];
    frequency[side]++;
    max_frequency = max(max_frequency, frequency[side]);
  }

  cout << max_frequency;

  return 0;
}
