#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;

    myVector.push_back(10);
    myVector.push_back(11);

    cout << myVector[0] << endl;
    cout << myVector[1] << endl;
    
    return 0;
}