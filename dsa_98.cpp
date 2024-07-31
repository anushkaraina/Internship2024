// find the duplicate string from the sentence
#include <iostream>
#include <map>
#include <string>
using namespace std;

void printDuplicates(const string& str) {
    map<char, int> charCount;
    for (char c : str) {
        charCount[c]++;
    }

    for (const auto& entry : charCount) {
        if (entry.second > 1) {
            cout << entry.first << ", count = " << entry.second << endl;
        }
    }
}

int main() {
    string inputSentence; 
    getline(cin, inputSentence);

    printDuplicates(inputSentence);

    return 0;
}
