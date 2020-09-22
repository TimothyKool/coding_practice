#include <iostream>
using namespace std;

bool isUnique(const string&);


int main() {
    // // O(N^2) complexity
    // string word = "Helo";
    // int size = word.size();
    // bool unique = true;
    
    // for(unsigned i = 0; i < size; i++) {
    //     for(unsigned j = 0; j < size; j++) {
    //         if(word.at(i) == word.at(j) && j != i) {
    //             unique = false;
    //             break;
    //         }
    //     }
    // }
    
    string input;
    getline(cin, input);

    if(isUnique(input)) {
        cout << "\"" << input << "\"" << " is unique!" << endl;
    }
    else {
        cout << "\"" << input << "\"" << " is not unique!" << endl;
    }
    
    return 0;
}

// At first look, seems like O(N) (where N is the number of chars in input); however, will always be less than 128 times so actually O(1)
bool isUnique(const string& input) {
    bool uniqueChars [128] = {0};
    if(input.size() > 128) {
        return false;
    }
    for(unsigned i = 0; i < input.size(); i++) {
        if(uniqueChars[input.at(i)]) {
            return false;
        }
        else {
            uniqueChars[input.at(i)] = 1;
        }
    }
    return true;
}