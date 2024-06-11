#include <iostream>
#include <map>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> myVector = {5, 10, 30, 20};
    int size = myVector.size();
    map<int, int> myMap;

    int target = 50;

    for (int i = 0; i < size; ++i) {
        int expectedValue = target - myVector[i];

        if (find(myVector.begin(), myVector.end(), expectedValue) != myVector.end() && myMap.find(expectedValue) == myMap.end()) {
            myMap[i] = myVector[i];
        }
    }

    for (map<int,int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << endl;
        cout << it->second << endl;
    }
    
    return 0;
}
