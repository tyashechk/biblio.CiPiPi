#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
struct Point {
    double x;
    double y;
};

int main(){
    setlocale(LC_ALL, "Russian");
    vector<Point> positivY;
    cout << "--------------------------------------" << endl;

    double y;
    double x;

for (double x = -4; x <= 4; x += 0.5) {
    if (x <= 0) {
        y = pow(x, 2) - 1;
        
    } else if (x > 0 && x <= 1.5) {
        y = cos(x);
        
    } else {
        y = sin(x - 1);
        
    }
    if (y > 0) {
        positivY.push_back({x, y});
    }
    cout << "x = " << x << "          y = " << y << endl;
}
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "Poloshitelnie znachenia funkcii :  " << positivY.size() << endl;
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "----------------------------------------------------"<< endl;
cout << "----------------------------------------------------"<< endl;

x = -4;
positivY.resize(0);

while (x <= 4) {

    if (x<=0){
        y = pow(x, 2) - 1;
    }
    else if (x > 0 && x <= 1.5) {
        y = cos(x);
        
    } else {
        y = sin(x - 1);
        
    }
    if (y > 0) {
        positivY.push_back({x, y});
    }
    cout << "x = " << x << "          y = " << y << endl;
    x += 0.5;
}
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "Poloshitelnie znachenia funkcii :  " << positivY.size() << endl;
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "----------------------------------------------------"<< endl;
cout << "----------------------------------------------------"<< endl;

x = -4;
positivY.resize(0);

do {
    if (x<=0) {
        y = pow(x, 2) - 1;
    } else if (x > 0 && x <= 1.5) {
        y = cos(x);
    } else {
        y = sin(x - 1);
    }
    
    cout << "x = " << x << "          y = " << y << endl;
    
    if (y > 0) {
        positivY.push_back({x, y});
    }
    cout << "x = " << x << "          y = " << y << endl;
    x += 0.5;
} while (x <= 4);
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "Poloshitelnie znachenia funkcii :  " << positivY.size() << endl;
cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
cout << "----------------------------------------------------"<< endl;
cout << "------------------------GATOVA----------------------"<< endl;
cout << "----------------------------------------------------"<< endl;
}