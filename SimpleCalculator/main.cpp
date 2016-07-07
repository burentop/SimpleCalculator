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
    
    cout << "Please enter an operator and two numbers separated by spaces (e.g. '+ 1 1'): ";
    cin >> operation >> val1 >> val2;
    
    if (operation == "+")
        result = val1 + val2;
    else if (operation == "-")
        result = val1 - val2;
    else if (operation == "*")
        result = val1 * val2;
    else if (operation == "/")
        result = val1 / val2;
    
    cout << result << "\n";
    return 0;
}
