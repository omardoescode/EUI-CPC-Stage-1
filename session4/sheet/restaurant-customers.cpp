#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  while (n--) {
    int a, b;
    cin >> a >> b;
    mp[a]++;
    mp[b]--;
  }

  int maximum_cust = 0, current_cust = 0;
  for (auto &p : mp) {
    current_cust += p.second;
    maximum_cust = max(maximum_cust, current_cust);
  }
  cout << maximum_cust << '\n';

  return 0;
}
