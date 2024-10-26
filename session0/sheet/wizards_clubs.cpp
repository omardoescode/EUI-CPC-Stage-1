#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int a[n + 1];
  int b[m + 1];

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  int j = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    while (j < m) {
      if (b[j] >= a[i]) {
        cnt++;
        i++;
      }
      j++;
    }
  }

  cout << max(0, n - cnt);
}
