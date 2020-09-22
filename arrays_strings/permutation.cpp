#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isPermutation(const string& string1, const string& string2) {
    int string1Chars [128] = {0};

    if(string1.size() != string2.size()) {
        return false;
    }
    // Update char counts for string1
    for(unsigned i = 0; i < string1.size(); i++) {
        string1Chars[string1.at(i)] += 1;
    }
    // Check to see if same chars are used
    for(unsigned i = 0; i < string2.size(); i++) {
        string1Chars[string2.at(i)] -= 1;
        if(string1Chars[string2.at(i)] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string string1;
    string string2;

    cin >> string1 >> string2;

    if(isPermutation(string1, string2)) {
        cout << "Yes they are permutations!" << endl;
    }
    else {
        cout << "No they are not permutations!" << endl;
    }

    return 0;
}