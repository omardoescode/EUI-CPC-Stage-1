#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;

  while (q--) {
    long long n, m;
    cin >> n >> m;

    n /= m;
    // sum until 10 * m;
    long long cycle = 10;
    vector<long long> cycle_sum(cycle + 1, 0);
    for (int i = 1; i <= cycle; i++) {
      cycle_sum[i] = cycle_sum[i - 1] + (i * m) % 10;
    }

    long long cycles = n / cycle;
    long long remainder = n % cycle;

    cout << cycles * cycle_sum[cycle] + cycle_sum[remainder] << endl;
  }
}
