#include<iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const string PUSH = "push";
  const string FRONT = "front";
  const string BACK = "back";
  const string POP = "pop";
  const string SIZE = "size";
  const string EMPTY = "empty";

  int N = 0; cin >> N;

  queue<int> st;

  for (int i=0 ; i<N ; i++) {
    string command; cin >> command;

    if (command == PUSH) {
      int value = 0; cin >> value;
      st.push(value);
    }

    else if (command == FRONT) {
      if (!st.empty()) {
        cout << st.front() << "\n";
      }
      else {
        cout << "-1" << "\n";
      }
    }

    else if (command == BACK) {
      if (!st.empty()) {
        cout << st.back() << "\n";
      }
      else {
        cout << "-1" << "\n";
      }
    }

    else if (command == POP) {
      if (!st.empty()) {
        cout << st.front() << "\n";
        st.pop();
      }
      else {cout << "-1" << "\n";} 
    }

    else if (command == SIZE) {
      cout << st.size() << "\n";
    }

    else if (command == EMPTY) {
      cout << st.empty() << "\n";
    }
  }
  
  return 0;
}