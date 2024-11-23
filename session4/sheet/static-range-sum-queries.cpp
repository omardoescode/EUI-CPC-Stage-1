#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> arr(n);
  vector<long long> pref(n + 1, 0);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  for (int i = 1; i <= n; ++i)
    pref[i] = arr[i - 1] + pref[i - 1];

  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << '\n';
  }

  return 0;
}
