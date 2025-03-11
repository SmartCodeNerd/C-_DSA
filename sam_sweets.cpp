#include <iostream>
#include <vector>

using namespace std;

pair<int, int> max_sweets(const vector<int>& A, const vector<int>& B, int m, const vector<int>& C) {
    int n = A.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    // Base cases
    for (int j = 0; j <= m; ++j) {
        dp[0][j] = 0;
    }

    // Recurrence relation
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (A[i - 1] <= C[j - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + B[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Find the maximum number of sweets and total sweetness
    int max_sweets = 0;
    int max_sweetness = 0;
    for (int i = 1; i <= n; ++i) {
        if (dp[i][m] != -1 && dp[i][m] > max_sweetness) {
            max_sweets = i;
            max_sweetness = dp[i][m];
        }
    }

    return make_pair(max_sweets, max_sweetness);
}

int main() {
    vector<int> A = {10, 2, 5};
    vector<int> B = {40, 90, 20};
    int m = 3;
    vector<int> C = {3, 4, 5};

    pair<int, int> result = max_sweets(A, B, m, C);
    cout << "Maximum number of sweets: " << result.first << endl;
    cout << "Total sweetness: " << result.second << endl;

    return 0;
}