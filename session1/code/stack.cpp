#include <iostream>
#include <stack>
using namespace std;

int main() {
  int TC;
  cin >> TC;
  while (TC--) {

    string str;
    cin >> str;
    stack<char> st;

    // if opening, put in stack
    // if closing,
    //   check top, if same pop
    //   if not, not valid

    // )
    bool solvable = true;
    for (int i = 0; i < str.size(); i++) {
      if (!solvable)
        break;
      auto &c = str[i];

      switch (c) {
      case '(':
      case '[':
        st.push(c);
        break;
      case ')':
        if (!st.empty() && st.top() == '(') {
          st.pop();
        } else {
          solvable = false;
        }
        break;
      case ']':
        if (!st.empty() && st.top() == '[') {
          st.pop();
        } else
          solvable = false;
        break;
      }
    }
    if (solvable && st.empty())
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
