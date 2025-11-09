#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    cout << "----------------------------------------------------" << endl;

    vector<double> array = {-1.5, 0.1, 12, 0, -2.2, 0.5, -1, 0.3};

    cout << "[";
    for (size_t i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
    double arrayMin = array[0];
    for (size_t i = 1; i < array.size(); i++) {
        if (array[i] < arrayMin) {
            arrayMin = array[i];
        }
    }
    cout << "minimalnae znachenie massiva: " << arrayMin << endl;
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
    double arrayMax = array[0];
    for (size_t i = 1; i < array.size(); i++) {
        if (array[i] > arrayMax) {
            arrayMax = array[i];
        }
    }
    cout << "maksimalnae znachenie massiva: " << arrayMax << endl;
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
    for (size_t i = 0; i < array.size(); i++) {
        if (array[i] <= 0) {
            array[i] = arrayMin;
        } else {
            array[i] = arrayMax;
        }
    }
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "izmenenni massiv: [";
    for (size_t i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------------------------------------------" << endl;
}