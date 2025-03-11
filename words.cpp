#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words = {"handful", "of", "words", "form", "a", "sentence", "handful", "of", "sentences", "form", "a", "paragraph"};
    
    map<string, int> frequency;
    for (const auto& word : words) {
        frequency[word]++;
    }
    
    string most_repetitive_word = "";
    int max_frequency = 0;

    for (const auto& entry : frequency) {
        if (entry.second > max_frequency || (entry.second == max_frequency && entry.first > most_repetitive_word)) {
            most_repetitive_word = entry.first;
            max_frequency = entry.second;
        }
    }
    
    cout << "The most repetitive word is: " << most_repetitive_word << endl;
    
    return 0;
}