
#include <map>
#include <unordered_map>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct query {
    int id, period, next;

    bool operator<(const query& other) const {
        if (next != other.next) return next > other.next;
        return id > other.id;
    }
};

int main() {
    priority_queue<query> qs;

    string s;
    while (cin >> s, s != "#") {
        int a, b;
        cin >> a >> b;
        qs.push({a, b, b});
    }

    int k; cin >> k;
    for (int i = 0; i < k; i++) {
        auto top = qs.top();
        cout << top.id << endl;
        qs.pop();
        qs.push({top.id, top.period, top.next + top.period});
    }
}

// Practice Session
// Hints -> Forum
s