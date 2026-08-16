#include <iostream>
#include <string>
using namespace std;
double calculateTotal(double marks[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }
    return total;
}
double calculateAverage(double total, int size)
{
    return total / size;
}
char calculateGrade(double average)
{
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
int main()
{
    string studentName;
    double marks[5];
    cout << "===== STUDENT REPORT GENERATOR =====" << endl;
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "\nEnter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
    double total = calculateTotal(marks, 5);
    double average = calculateAverage(total, 5);
    char grade = calculateGrade(average);
    cout << "\n===== STUDENT REPORT =====" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
