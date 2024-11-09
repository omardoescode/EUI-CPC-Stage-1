#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  map<string, int> mp;

  while (m--) {
    string str;
    cin >> str;
    int salary;
    cin >> salary;
    mp[str] = salary;
  }

  while (n--) {
    string str;
    int sum = 0;
    while (str != ".") {
      cin >> str;
      if (mp[str] != 0)
        sum += mp[str];
    }
    cout << sum << endl;
  }

  return 0;
}
