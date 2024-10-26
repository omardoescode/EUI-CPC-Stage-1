#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;

  cin >> n >> m;
  if (n - m == m - 1 && n - m == 0)
    cout << 1;
  else if (n - m > m - 1)
    cout << m + 1;
  else
    cout << m - 1;
}
