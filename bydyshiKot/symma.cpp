#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "--------------------------------------" << endl;
    double x;
    cout << "Zadai x: ";
    cin >> x;

    double y;
    cout << "Zadai y: ";
    cin >> y;
    cout << endl << endl;

    double t = x+y;
    cout << "rezyltat = " << t << endl;
}