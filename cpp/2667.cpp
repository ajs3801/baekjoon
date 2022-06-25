#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

#define EMPTY 0
#define HOME 1
#define FOUND 2

using namespace std;

void markItFound(int** arr, int i , int j)
{
  arr[i][j] = FOUND;
}

void findHouseNumber(int** arr, int i, int j, int N, int& count)
{
  if (i>=0 && j>=0) {
    markItFound(arr,i,j);
    // cout << "access " << i << " " << j << endl;
  }

  int left_i = i;
  int left_j = j-1;

  int up_i = i-1;
  int up_j = j;

  int right_i = i;
  int right_j = j+1;

  int down_i = i+1;
  int down_j = j;

  if (left_i>=0 && left_j>=0 && left_i<N && left_j<N) {
    if (arr[left_i][left_j] == HOME) {
      count = count + 1;
      findHouseNumber(arr,left_i,left_j,N,count);
    }
  }

  if (up_i>=0 && up_j>=0 && up_i<N && up_j<N) {
    if (arr[up_i][up_j] == HOME) {
      count = count + 1;
      findHouseNumber(arr,up_i,up_j,N,count);
    }
  }

  if (right_i>=0 && right_j>=0 && right_i<N && right_j<N) {
    if (arr[right_i][right_j] == HOME) {
      count = count + 1;
      findHouseNumber(arr,right_i,right_j,N,count);
    }
  }

  if (down_i>=0 && down_j>=0 && down_i<N && down_j<N) {
    if (arr[down_i][down_j] == HOME) {
      count = count + 1;
      findHouseNumber(arr,down_i,down_j,N,count);
    }
  }
}

int main(void)
{
  //get the matrix size
  int N = 0;
  cin >> N;
  
  //NxN 할당
  int** arr = new int*[N];
  for(int i=0; i<N; i++)
    arr[i] = new int[N];

  //get the value
  for (int i=0 ; i<N ; i++) {
    string input = "";
    cin >> input;

    for (int j=0 ; j<input.length() ; j++) {
      arr[i][j] = input[j] - '0';
    }
  }

  int house = 0;
  vector<int> houseCount;
  // cout << "init" << endl;

  //find house
  for (int i=0 ; i<N ; i++) {
    for (int j=0 ; j<N ; j++) {
      if (arr[i][j] == HOME) {
        house++;
        
        int count = 1;
        findHouseNumber(arr,i,j,N,count);
      
        houseCount.push_back(count);
      }
    }
  }
  // cout << "finding" << endl;

  //sort it
  sort(houseCount.begin(), houseCount.end());
  // cout << "sorting" << endl;
  
  //print result
  cout << house << endl;
  for (int i=0 ; i<houseCount.size() ; i++) {
    cout << houseCount[i] << endl;
  }

  //NxN matrix deallocate
  for(int i=0; i<N; i++)
    delete[] arr[i];
  delete[] arr;
  return 0;
}