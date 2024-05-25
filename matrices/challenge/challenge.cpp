#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: " << endl;

    cin >> name;

    int periods = 4;

    double scores[periods];

    for (int i = 0; i < periods; i++) {
        double score;

        cout << "Enter your score in the " << i + 1 << " period: " << endl;

        cin >> score;

        scores[i] = score;
    }
    
    double previousScore = 0;

    for (int i = 0; i < periods; i++) {
        previousScore = previousScore + scores[i]; 
    }

    double average = previousScore / periods;

    cout << name << " your average is: " << average << endl;

    if (average >= 7) {
        cout << "You are approved" << endl;
    } else {
        cout << "You are not approved" << endl;
    }

    return 0;
}