#include <iostream>
using namespace std;

/* Analyses: O(N) time and space as this is done in place */

void URLify(string& input) {
    int fill = input.size() - 1;
    int scan = input.size() - 1;

    while(input.at(scan) == ' ') {
        scan--;
    }

    while(scan >= 0 && fill >= 0) {
        if(input.at(scan) != ' ') {
            input.at(fill) = input.at(scan);
        }
        else {
            input.at(fill) = '0';
            input.at(--fill) = '2';
            input.at(--fill) = '%';
        }
        --fill;
        --scan;
    }
}

int main() {
    string input;
    getline(cin, input);

    URLify(input);

    cout << input << endl;

    return 0;
}