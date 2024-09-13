#include <iostream>
using namespace std;

enum Grade {
    A = 90,
    B = 80,
    C = 70,
    D = 60,
    F = 0
};

Grade getGradeFromScore(int score) 
{
    
    if (score >= 90)
    {
        return A;
    }
    else if (score >= 80)
    {
        return B;
    }
    else if (score >= 70)
    {
        return C;
    }
    else if (score >= 60)
    {
        return D;
    }
    else
    {
        return F;
    }
}

double calculateAverage(int grades[5])
{
    double total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += grades[i];
    }
    return total / 5;
}

static void displayGrades(int grades[5])
{
    char letterGrade;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << "'s grade is " << grades[i] << "\n";
        switch (getGradeFromScore(grades[i])) {
        case 90:
            letterGrade = 'A';
            break;
        case 80:
            letterGrade = 'B';
            break;
        case 70:
            letterGrade = 'C';
            break;
        case 60:
            letterGrade = 'D';
            break;
        case 0:
            letterGrade = 'F';
            break;
        }
        cout << "In letter grade, their grade is " << letterGrade << "\n";
    }
}

int main()
{
    int studentGrades[5];
    cout << "Please input 5 students' grades from 0 to 100. \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ":";
        cin >> studentGrades[i];
        while (studentGrades[i] < 0 || studentGrades[i] > 100)
        {
            cout << "Please enter a number from 0 to 100.";
            cin >> studentGrades[i];
        }
    }
    cout << "The average of the grades is " << calculateAverage(studentGrades) << "\n";
    displayGrades(studentGrades);
    return 0;
}


