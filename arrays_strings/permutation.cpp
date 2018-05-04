#include <iostream>
#include <map>
#include <string>

using namespace std;

void fill(map<char, int>& m, const string& word, const int& size) {
    for(int i = 0; i < size; i++) {
        if(m.find(word.at(i)) != m.end()) {
            m[word.at(i)] += 1;
        }
        else {
            m.insert(pair<char, int>(word.at(i), 1));
        }
    }
    return;
}


int main() {
    map <char, int> m1;
    map <char, int> m2;
    bool permutation = true;

    string word1 = "hello";
    string word2 = "olelh";
    int size1 = word1.size();
    int size2 = word2.size();

    if(size1 != size2) {
        permutation = false;
    }
    else {
        fill(m1, word1, size1);
        fill(m2, word2, size2);
    }

    cout << m1['h'] << endl;
    for(auto entry: m1) {
        cout << entry.first << " " << entry.second << endl;
    }
    cout << "-------------------------" << endl;
    for(auto entry: m2) {
        cout << entry.first << " " << entry.second << endl;
    }

    if(m1 != m2) {
        permutation = false;
    }
    if(permutation) {
        cout << "Is a permutation" << endl;
    }
    else {
        cout << "Is not permutation" << endl;
    }


    return 0;
}