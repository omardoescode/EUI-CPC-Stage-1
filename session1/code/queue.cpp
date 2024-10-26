#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n, n != 0) {
    queue<int> que;
    for (int i = 0; i < n; i++) {
      que.push(i + 1); // 1 2 3 4 ... n
    }
    // 2 3 4 5 6 7
    bool comma = false;
    cout << "Discarded cards:";
    while (que.size() >= 2) {
      if (comma) {
        cout << ',';
      }
      cout << " " << que.front();
      que.pop(); //
      que.push(que.front());
      que.pop();

      comma = true;
    }
    cout << endl;
    cout << "Remaining card: " << que.front() << endl;
  }

  return 0;
}
