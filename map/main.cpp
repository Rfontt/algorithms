#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, int> myMap;

    myMap["Anie"] = 20;
    myMap["Barbie"] = 10;
    myMap["Cristian"] = 30;

    cout << "map" << endl;

    for (map<string,int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << endl;
        cout << it->second << endl;

    }

    cout << "unordered_map" << endl;

    unordered_map<string, int> myMap2;

    myMap2["Anie"] = 20;
    myMap2["Barbie"] = 10;
    myMap2["Cristian"] = 30;

    for (unordered_map<string,int>::iterator it = myMap2.begin(); it != myMap2.end(); ++it) {
        cout << it->first << endl;
        cout << it->second << endl;

    }
    
    return 0;
}
