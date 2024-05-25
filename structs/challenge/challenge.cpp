#include <iostream>
using namespace std;

struct Student {
    string name;
    double avg;
};

struct Report {
    int studentsFailedSize;
    int studentsApprovedSize;

    Report() {
        studentsFailedSize = 0;
        studentsApprovedSize = 0;
    }

    void showReport(Student students[], int studentsSize) {

        for(int i = 0; i < studentsSize; i++) {
            if (students[i].avg < 6) {
                studentsFailedSize++;
            } else {
                studentsApprovedSize++;
            }
        }

        cout << studentsApprovedSize << " students are approved" << endl;
        cout << studentsFailedSize << " students are failed" << endl;
    }
};

int main() {

    Student student1 = {"rfontt", 8.5};
    Student student2 = {"jourge", 10};
    Student student3 = {"bone", 5};

    int studentsSize = 3;

    Student students[studentsSize];

    students[0] = student1;
    students[1] = student2;
    students[2] = student3;

    Report report;

    report.showReport(students, studentsSize);
}
