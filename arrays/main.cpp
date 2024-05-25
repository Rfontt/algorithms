#include <iostream>
using namespace std;

int main() {
    double score[4];

    score[0] = 10;

    cout << score[0] << endl;

    double score2[4] = {10, 8, 9.5, 7};
    int sizeOfArray = sizeof(score) / sizeof(double);

    cout << score2[1] << endl;
    cout << "SizeOf: " << sizeof(score) << endl;
    cout << "SizeOfArray: " << sizeOfArray << endl;

    return 0;
}