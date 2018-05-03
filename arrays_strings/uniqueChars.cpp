#include <iostream>
using namespace std;



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
    
    // cout << unique << endl;
    
    // O (N) complexity but will always be less than 128 times so could be argued for O(1)
    bool arr [128] = {0};
    string word = "Helo thr";
    bool unique = true;
    int charValue;
    
    if(word.size() > 128) {
        unique = false;
    }
    
    for(unsigned i = 0; i < word.size(); i++) {
        charValue = word.at(i);
        if(arr[charValue]) {
            unique = false;
        }
        arr[charValue] = true;
    }
    cout << unique << endl;
    
    
    
    
    return 0;
}