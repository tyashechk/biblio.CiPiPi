#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string name;
    int age;
    double average_score;
    cout << "--------------------------------------" << endl;

    cout << "Your name: ";
    cin >> name;
    
    cout << "Your age: ";
    cin >> age;
    
    cout << "Your ballik: ";
    cin >> average_score;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2);
    cout << "Ballik: " << average_score << endl;
}