// #include <iostream>
// #include <string>
// #include <set>

// using namespace std;

// int max_pairs(const string& line) {
//     int n = line.size();
//     int pairs = 0;
//     set<int> used;

//     for (int i = 0; i < n; ++i) {
//         if (line[i] == 'G' && used.find(i) == used.end()) {
//             for (int j = i + 1; j < n; ++j) {
//                 if (line[j] == 'B' && used.find(j) == used.end()) {
//                     pairs++;
//                     used.insert(i);
//                     used.insert(j);
//                     break;
//                 }	
//             }
//         }
//     }

//     return pairs;
// }

// int main() {
//     string line = "BGGBBGGB";
//     int result = max_pairs(line);
//     cout << "Maximum number of pairs: " << result << endl;

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int maxPairs(int n, const string& line) {
    int boysCount = 0;
    int pairsCount = 0;

    for (char ch : line) {
        if (ch == 'B') {
            boysCount++;
        } else if (ch == 'G') {
            if (boysCount > 0) {
                pairsCount++;
                boysCount--; // Use one boy for the pair
            }


        }
    }

    return pairsCount;
}

int main() {
    int n = 8;
    //cin >> n; // Read the number of people in the line
    string line = "BGGBBGGB";
    //cin >> line; // Read the line of characters

    // Output the result
    cout << maxPairs(n, line) << endl;

    return 0;
}