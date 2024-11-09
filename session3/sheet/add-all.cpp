#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      pq.push(x * -1);
    }
    int total_cost = 0;
    while (pq.size() > 1) {
      int top1 = pq.top() * -1;
      pq.pop();
      int top2 = pq.top() * -1;
      pq.pop();
      int sum = top1 + top2;
      total_cost += sum;
      pq.push(sum * -1);
    }
    cout << total_cost << endl;
  }

  return 0;
}
