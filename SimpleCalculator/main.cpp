//
//  main.cpp
//  SimpleCalculator
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    string operation;
    double val1, val2;
    double result;
    
    cout << "Please enter two decimal numbers and an operator, separated by spaces (e.g. '1 1 +'): ";
    cin >> val1 >> val2 >> operation;
    
    if (operation == "+") {
        result = val1 + val2;
        cout << "The sum of " << val1 << " and " << val2 << " is " << result << ".\n";
    }
    else if (operation == "-") {
        result = val1 - val2;
        cout << "The difference between " << val1 << " and " << val2 << " is " << result << ".\n";
    }
    else if (operation == "*") {
        result = val1 * val2;
        cout << "The product of " << val1 << " and " << val2 << " is " << result << ".\n";
    }
    else if (operation == "/") {
        result = val1 / val2;
        cout << "The quotient of " << val1 << " and " << val2 << " is " << result << ".\n";
    }

    return 0;
}
