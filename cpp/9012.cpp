#include <iostream>
#include <typeinfo>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  const char LEFT = '(';
  const char RIGHT = ')';

  const int LEFT_VALUE = 0;
  const int RIGHT_VALUE = 1;

  int Case = 0; cin >> Case;

  for (int i=0 ; i<Case ; i++){
    string input; cin >> input;
    stack<int> st;

    for (int j=0 ; j<input.size() ; j++) {

      if (input[j] == LEFT) {
        st.push(LEFT_VALUE);
      }

      else {
        if (st.empty()) {
          st.push(RIGHT_VALUE);
        }

        else if (!st.empty() && (st.top() == LEFT_VALUE)) {
          st.pop();
        }
      }
    }

    if (!st.empty()) {
      cout << "NO" << endl;
    }

    else {
      cout << "YES" << endl;
    }
  }

  return 0;
} 