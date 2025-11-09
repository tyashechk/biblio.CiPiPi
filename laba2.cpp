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

    double c;
    cout << "Zadai c: ";
    cin >> c;

    double d;
    cout << "Zadai d: ";
    cin >> d;
    cout << endl << endl;

    double e;
    if (x * y > 3) {
    e = max(x, 3 * log(abs(x * y * c * d)));
} else if (x * y >= 0 && x * y <= 3) {
    e = 3 * min(min(x, y), max(c * x, d * y));
} else if (x * y < 0) {
    e = 2 * c * d - x;
}

    cout << "rezyltat =" << e << endl << endl;
    

    cout << "zakonchili!!!";
    cout << "--------------------------------------";
} 