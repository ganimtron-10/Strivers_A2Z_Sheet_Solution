// https://bit.ly/3SVYU8f 

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public: int findEle(int arr[], int size, int k) {
    for (int i = 0; i < size; i++) {
      if (arr[i] == k) {
        return 1;
      }
    }
    return 0;
  }

  vector < pair < int,
  int >> allPairs(int A[], int B[], int N, int M, int X) {
    // Your code goes here 
    map < int, int > mpair;
    for (int i = 0; i < N; i++) {
      int diff = X - A[i];
      if (findEle(B, M, diff) == 1) {
        mpair[A[i]] = diff;
      }
    }

    vector < pair < int, int >> v;

    for (auto i: mpair) {
      v.push_back({
        i.first,
        i.second
      });
    }

    return v;

  }
};

int main() {
  long long t;
  cin >> t;

  while (t--) {
    int N, M, X;
    cin >> N >> M >> X;
    int A[N], B[M];

    for (int i = 0; i < N; i++)
      cin >> A[i];
    for (int i = 0; i < M; i++)
      cin >> B[i];

    Solution ob;
    vector < pair < int, int >> vp = ob.allPairs(A, B, N, M, X);
    int sz = vp.size();
    if (sz == 0)
      cout << -1 << endl;
    else {
      for (int i = 0; i < sz; i++) {
        if (i == 0)
          cout << vp[i].first << " " << vp[i].second;
        else
          cout << ", " << vp[i].first << " " << vp[i].second;
      }
      cout << endl;
    }
  }
  return 0;
}

// Input
// 1
// 4 5 9
// 2 4 5 7
// 4 4 2 9 3
// Output
// 5 4, 7 2
