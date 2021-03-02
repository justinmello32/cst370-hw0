/*
 * Title: hw0_1.cpp
 * Abstract: This program reads the user's input data and
 *           conducts sum and difference operations, depending
 *           on the command key.
 * Author: Justin Mello
 * ID: 2002
 * Date: 03/02/2021
 */



#include <iostream>
using namespace  std;

int main() {
    int a, b, c;
    int result = 0;

    while (true) {
        cin >> a;
        //Break out of loop if 9
        if (a == 9) {
            break;
        }
        cin >> b >> c;

        //Sum of two integer numbers
        if (a == 1) {
            result = b + c;
            cout << result << endl;
        }
        //Calculate the difference of two integer numbers
        else if (a == 2) {
            if (b > c) {
                result = b - c;
                cout << result << endl;
            }
            if (c > b) {
                result = c - b;
                cout << result << endl;
            }
            if (c == b) {
                result = b - c;
                cout << result << endl;
            }
        }
    }
}
