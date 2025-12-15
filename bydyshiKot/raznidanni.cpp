#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "--------------------------------------" << endl;
    int x;
    cout << "Zadai celoe chislo: ";
    cin >> x;

    double y;
    cout << "Zadai veshestvennoe chislo: ";
    cin >> y;

    bool c;
    cout << "Zadai logisheskoe znachenie(0/1): ";
    cin >> c;

    cout << "Celoe: " << x << endl;
    cout << fixed << setprecision(2);
    cout << "Veshestvennoe: " << y << endl;
    cout << "Logicheskoe znachenie: " << (c ? "true" : "false")<< endl;
}