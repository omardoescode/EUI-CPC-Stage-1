#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int TC;
  cin >> TC;
  while (TC--) {
    int a, b, c;
    cin >> a >> b >> c;
    bool solution = false;
    for (int x = -100; x <= 100 && !solution; x++) {
      if (x * x > c)
        continue;
      for (int y = -100; y <= 100 && !solution; y++) {
        if (x * x + y * y > c || x == y)
          continue;
        for (int z = -100; z <= 100 && !solution; z++) {
          if (x == z || y == z)
            continue;
          if (x * x + y * y + z * z == c && x + y + z == a && x * y * z == b) {
            cout << x << " " << y << " " << z << endl;
            solution = true;
          }
        }
      }
    }

    if (!solution) {
      cout << "No solution." << endl;
    }
  }

  return 0;
}
