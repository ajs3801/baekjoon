#include<iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  const string PUSH = "push";
  const string TOP = "top";
  const string POP = "pop";
  const string SIZE = "size";
  const string EMPTY = "empty";

  int N = 0; cin >> N;

  stack<int> st;

  for (int i=0 ; i<N ; i++) {
    string command; cin >> command;

    if (command == PUSH) {
      int value = 0; cin >> value;
      st.push(value);
    }

    else if (command == TOP) {
      if (!st.empty()) {
        cout << st.top() << endl;
      }
      else {
        cout << "-1" << endl;
      }
    }

    else if (command == POP) {
      if (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
      }
      else {cout << "-1" << endl;} 
    }

    else if (command == SIZE) {
      cout << st.size() << endl;
    }

    else if (command == EMPTY) {
      cout << st.empty() << endl;
    }
  }
  return 0;
}

// 14
// push 1
// push 2
// top
// size
// empty
// pop
// pop
// pop
// size
// empty
// pop
// push 3
// empty
// top