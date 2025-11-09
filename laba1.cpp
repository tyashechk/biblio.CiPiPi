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

    double pi = M_PI;
    double t = cos(pi / 7) * pow((sin(x)),2) / ((2.7*(x - pi)));
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~ rezyltat = " << t << endl;
    t = round(t);
    cout << "~~~ rezyltat, ogryglenni do celix = " << t << endl << endl;
    

    cout << "konicc!!!" << endl;
    cout << "--------------------------------------";



}