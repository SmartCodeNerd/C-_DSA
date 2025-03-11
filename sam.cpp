#include<bits/stdc++.h>
using namespace std;
pair<int, int> makeSweets(vector<int> &A, vector<int> &B, vector<int> &C) {
  int n = A.size();
  vector<pair<int, int>> sweets;
  for (int i = 0; i < n; ++i) {
    sweets.push_back({A[i], B[i]});
  }
  // sort by their required time
  sort(sweets.begin(), sweets.end());

  // also make available time sorted
  sort(C.begin(), C.end());
  priority_queue<int> q;

  int i = 0;
  int cnt = 0, total = 0;
  for (int c: C) {
    // put all available sweets into the priority queue
    while (i < n && sweets[i].first <= c) {
      q.push(sweets[i].second);
      ++i;
    }
    // if we can make sweet in this day, get the max sweet one
    if (!q.empty()) {
      ++cnt;
      total += q.top();
      q.pop();
    }
  }
  return {cnt, total};
}

int main() {
    vector<int> A = {10, 2, 5};
    vector<int> B = {40, 90, 20};
    int m = 3;
    vector<int> C = {3, 5, 4};

    pair<int, int> result = makeSweets(A, B, C);
    cout << "Maximum number of sweets: " << result.first << endl;
    cout << "Total sweetness: " << result.second << endl;

    return 0;
}