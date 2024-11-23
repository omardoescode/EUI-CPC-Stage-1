#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int caseNum = 1;
  while (cin >> s && !s.empty()) {
    vector<int> v(s.size(), 0);
    v[0] = s[0] - '0';
    int n;
    cin >> n;
    for (int i = 1; i < s.size(); ++i)
      v[i] = v[i - 1] + s[i] - '0';

    cout << "Case " << caseNum << ':' << '\n';
    while (n--) {
      int i, j;
      cin >> i >> j;
      if (i > j)
        swap(i, j);

      int rangeSum = v[j] - v[i - 1];
      if (rangeSum == 0 || rangeSum == j - i + 1)
        cout << "Yes\n";
      else
        cout << "No\n";
    }
    caseNum++;
  }

  return 0;
}
