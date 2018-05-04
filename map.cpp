#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<int> list;
    list.push_back(100);
    list.push_back(100);
    list.push_back(100);
    list.push_back(1);
    list.push_back(2);
    list.push_back(2);
    list.push_back(2);
    list.push_back(8);
    list.push_back(10);
    list.push_back(50);
    
    map<int, int> m;

    for(unsigned i = 0; i < list.size(); i++) {
        if(m.find(list.at(i)) != m.end()) {
            m[list.at(i)] += 1;
        }
        else {
            m.insert(pair<int, int>(list.at(i), 1));
        }
    }

    
    for (auto entry : m) {
    	cout << entry.first << " " << entry.second << endl;
    }


    return 0;
}