#include <iostream>
using namespace std;

int main() {
    int rows = 2;
    int columns = 2;
    
    string users[rows][columns] = {
        {"rfontt", "CE"},
        {"jourge", "SP"}
    };

    cout << users[0][1] << endl;

    for (int i = 0; i< rows; i++) {
        for (int j = 0; j < rows; j++) {
            cout << users[i][j] << endl;
        }

        cout << endl;
    }

    return 0;
}