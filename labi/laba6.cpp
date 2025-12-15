#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    cout << "----------------------------------------------------" << endl;

    vector<vector<double>> array = {
        //   0   1   2   3   4            __i__
            {1,  15, 24, 8,  17}, // 0          |  
            {23, 7,  16, 5,  14}, // 1          j
            {20, 4,  13, 22, 6 }, // 2          |
            {12, 21, 10, 19, 3 }, // 3
            {9,  18, 2,  11, 25}  // 4
        };

        for (size_t i = 0; i < array.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < array[i].size(); j++) {
            cout << array[i][j];
            if (j < array[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

            //------------------------------------------------
    int str1 = 0, stl1 = 0, diag1 = 0;
    int str2 = 0, stl2 = 0, diag2 = 0;
    int str3 = 0, stl3 = 0;
    int str4 = 0, stl4 = 0;
    int str5 = 0, stl5 = 0;
    //------------------------------------------------

    for (size_t i = 0; i < array.size(); i++) {
        for (size_t j = 0; j < array[i].size(); j++) {
            //------------------------------------------------
            if (i == j) {
                diag1 += array[i][j];
            }
            if (i + j == array.size() - 1) {
                diag2 += array[i][j];
            }
            //------------------------------------------------
            if (j == 0) {
                str1 += array[i][j];
            }
            if (j == 1) {
                str2 += array[i][j];
            }
            if (j == 2) {
                str3 += array[i][j];
            }
            if (j == 3) {
                str4 += array[i][j];
            }
            if (j == 4) {
                str5 += array[i][j];
            }
            //------------------------------------------------
            if (i == 0) {
                stl1 += array[i][j];
            }
            if (i == 1) {
                stl2 += array[i][j];
            }
            if (i == 2) {
                stl3 += array[i][j];
            }
            if (i == 3) {
                stl4 += array[i][j];
            }
            if (i == 4) {
                stl5 += array[i][j];
            }
        }
    }
    cout << "Symma pervoi stroki:        " << str1 << endl;
    cout << "Symma vtoroi stroki:        " << str2 << endl;
    cout << "Symma tretiei stroki:       " << str3 << endl;
    cout << "Symma chetvertoi stroki:    " << str4 << endl;
    cout << "Symma pyatoi stroki:        " << str5 << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Symma pervogo stolbtsa:     " << stl1 << endl;
    cout << "Symma vtorogo stolbsa:      " << stl2 << endl;
    cout << "Symma tretiego stolbsa:     " << stl3 << endl;
    cout << "Symma chetvertogo stolbsa:  " << stl4 << endl;
    cout << "Symma pyatogo stolbsa:      " << stl5 << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Symma pervoi diagonali:     " << diag1 << endl;
    cout << "Symma vtoroi diagonali:     " << diag2 << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    if (str1 == str2 && 
        str2 == str3 && 
        str3 == str4 && 
        str4 == str5 && 
        str5 == stl1 && 
        stl1 == stl2 && 
        stl2 == stl3 && 
        stl3 == stl4 && 
        stl4 == stl5 && 
        stl5 == diag1 && 
        diag1 == diag2) {
        cout << "Vse sovpalo!!! Matritsa yavlyaetsa magicheskim kvadratom >3" << endl;
    } else {
        cout << "Symmi ni sovpali, mitritsa ni yavlyaetsa magicheskim kvadratom :(" << endl;
    }
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "--------------------konetz!!-------------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}