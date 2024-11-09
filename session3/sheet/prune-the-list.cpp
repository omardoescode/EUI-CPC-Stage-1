#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    map<int, int> f1, f2;

    for (int i = 0; i < n; ++i) {
      int a;
      cin >> a;
      f1[a]++;
    }
    for (int i = 0; i < m; ++i) {
      int a;
      cin >> a;
      f2[a]++;
    }
    int differences = 0;
    for (pair<int, int> p : f1)
      if (p.second > f2[p.first])
        differences += p.second - f2[p.first];

    for (pair<int, int> p : f2)
      if (p.second > f1[p.first])
        differences += p.second - f1[p.first];

    cout << differences << '\n';
  }
}
