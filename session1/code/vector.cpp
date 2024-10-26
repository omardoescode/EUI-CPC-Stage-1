#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n, n != 0) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      v[i] = i + 1;
    }

    bool comma = false;
    cout << "Discarded cards:";
    while (v.size() >= 2) {
      if (comma) {
        cout << ',';
      }
      cout << " " << v[0];
      v.erase(v.begin());
      v.push_back(v[0]);
      v.erase(v.begin());
      comma = true;
    }
    cout << endl;
    cout << "Remaining card: " << v[0] << endl;
  }

  return 0;
}
