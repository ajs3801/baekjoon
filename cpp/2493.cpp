#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N = 0; cin >> N;

  stack<pair<int, int> > tower;

  for (int i=0 ; i<N ; i++) {
    int height = 0;
    cin >> height;

    while(tower.empty() == false) {
      if (tower.top().second > height) {
        cout << tower.top().first << " ";
        break;
      }
      else {
        tower.pop();
      }
    } 

    if (tower.empty() == true) {
      cout << "0 ";
    }
    
    tower.push(make_pair(i+1,height));
  }

  return 0;
}