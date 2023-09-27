//
//  main.cpp
//  Calculator
//
//  Created by Iosif Dubikovski on 9/26/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter number: ";
    double firstNum;
    char character;
    double secondNum;
    double ans;
    cin >> firstNum;

    cout << "Enter one of the following characters: -, +, /, *: ";
    cin >> character;

    cout << "Enter second number: ";
    cin >> secondNum;

    if (secondNum < 0) {
        secondNum *= -1;
    }

    switch (character) {
        case '-':
            ans = firstNum - secondNum;
            break;
        case '+':
            ans = firstNum + secondNum;
            break;
        case '/':
            if (secondNum != 0) {
                ans = firstNum / secondNum;
            } else {
                cout << "Error: Division by zero\n";
                ans = 0;
                return 0;
            }
            break;
        case '*':
            ans = firstNum * secondNum;
            break;
        default:
            cout << "Error: Invalid operator\n";
            ans = 0;
            break;
    }

    cout << "Result: " << ans << "\n";
    return 0;
}
