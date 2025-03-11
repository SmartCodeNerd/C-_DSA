#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximizeStrength(vector<int>& arr) {
    int n = arr.size();

    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    int maxStrength = 0;

    // Calculate the sum of strengths
    for (int i = 0; i < n; ++i) {
        maxStrength += arr[i] * (i + 1);
    }

    return maxStrength;
}

int main() {
    vector<int> arr = {2,1,4,3};
    int result = maximizeStrength(arr);

    cout << "Maximum possible sum of strengths: " << result << endl;

    return 0;
}