#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    for (int i = 0; i < n; ++i)
      cin >> c[i];

    set<pair<long long, int>> s;
    for (int i = 0; i < n; ++i)
      s.insert({1, i});

    long long last_turn = 1;
    while (h > 0) {
      auto currentAttack = *s.begin();
      int i = currentAttack.second;
      long long turn = currentAttack.first;
      s.erase(s.begin());
      h -= a[i];
      last_turn = turn;
      s.insert({last_turn + c[i], i});
    }

    cout << last_turn << '\n';
  }

  return 0;
}
