#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n, m;
  while (cin >> n >> m) {
    ll a[n + 1], b[m + 1];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int j = 0; j < m; j++)
      cin >> b[j];

    int j = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      while (j < m) {
        if (b[j] >= a[i]) {
          cnt++;
          i++;
        }
        j++;
      }
    }
    cout << max(0LL, n - cnt) << endl;
  }
  return 0;
}
