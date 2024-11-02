#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n != 0 && m != 0) {
        unordered_set<int> jack, jill;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            jack.insert(a);
        }
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            jill.insert(a);
        }

        int count = 0;
        for (auto & c : jack) {
           if (jill.count(c) == 1) count++;
        }

        cout << count << endl;
    }
}