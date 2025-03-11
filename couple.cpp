#include <iostream>
#include <string>

using namespace std;

int maxPairs(int n, const string& line) {
    int g_ptr = 0, b_ptr = 0;
    int pairsCount = 0;

    // Start looking for pairs
    while (g_ptr < n && b_ptr < n) {
        // Find the next girl
        while (g_ptr < n && line[g_ptr] != 'G') g_ptr++;
        // Find the next boy after the found girl
        while (b_ptr < n && (b_ptr <= g_ptr || line[b_ptr] != 'B')) b_ptr++;

        // If we found a valid girl and boy to pair
        if (g_ptr < n && b_ptr < n) {
            pairsCount++; // Form a pair
            g_ptr++; // Move girl pointer
            b_ptr++; // Move boy pointer
        }
    }

    return pairsCount;
}

int main() {
    int n=5;
    // cin >> n; // Read the number of people in the line
    string line="GBGBB";
    // cin >> line; // Read the line of characters

    // Output the result
    cout << maxPairs(n, line) << endl;

    return 0;
}