#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double Perimitir(double);
double Rad;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n1 = 10;
    int n2 = 50;
    int n3 = 100;
    double P1;
    double P2;
    double P3;

    cout << "Zadai radius:" << endl;
    cin >> Rad;

    P1 = Perimitir(n1);
    cout << "Perimiter ten-ygolnika: " << P1 << endl << endl;

    P2 = Perimitir(n2);
    cout << "Perimiter pisyat-ygolnika: " << P2 << endl << endl;

    P3 = Perimitir(n3);
    cout << "Perimiter sto-ygolnika: " << P3 << endl << endl;

    system("pause");
}

double Perimitir(double Nya)
{
    double a = 2 * Rad * sin(M_PI / Nya);
    double P = Nya * a;
    return P;
}