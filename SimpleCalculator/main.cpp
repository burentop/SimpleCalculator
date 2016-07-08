//
//  main.cpp
//  SimpleCalculator
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

string lookup_number(string number) {
    bool found = false;
    string output = " ";
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == number) {
            found = true;
            output = digits[i];
        }
    }
    
    if (!found) {
        for (int j = 0; j < digits.size(); ++j) {
            if (digits[j] == number) {
                found = true;
                output = number;
            }
        }
    }
    
    if (!found) {
        output = "error";
    }
    return output;
}

string calculate(int val1, int val2, string operation) {
    double result = 0;
    string to_print = " ";
    if (operation == "+") {
        result = val1 + val2;
        to_print = "The sum of " + to_string(val1) + " and " + to_string(val2) + " is " + to_string(result) + ".\n";
    }
    else if (operation == "-") {
        result = val1 - val2;
        to_print = "The difference between " + to_string(val1) + " and " + to_string(val2) + " is " + to_string(result) + ".\n";
    }
    else if (operation == "*") {
        result = val1 * val2;
        to_print = "The product of " + to_string(val1) + " and " + to_string(val2) + " is " + to_string(result) + ".\n";
    }
    else if (operation == "/") {
        result = val1 / val2;
        to_print = "The quotient of " + to_string(val1) + " and " + to_string(val2) + " is " + to_string(result) + ".\n";
    } else {
        to_print = "error";
    }
    
    return to_print;
}


int main()
{
    string operation;
    string val1, val2;
    int conv_val1, conv_val2;
    

    cout << "Please enter two single-digit numbers (spelled out is fine) and an operator, separated by spaces.";
    cout << "(e.g. '1 1 +' or 'one one +'): ";
    cin >> val1 >> val2 >> operation;
    
    if (lookup_number(val1) == "error" || lookup_number(val2) == "error" || (operation != "+" && operation != "-" && operation != "/" && operation != "*")) {
        cout << "You didn't enter numbers between 0-9 (zero-nine).\n";
    } else {
        val1 = lookup_number(val1);
        val2 = lookup_number(val2);
        conv_val1 = atoi(val1.c_str());
        conv_val2 = atoi(val2.c_str());
        cout << calculate(conv_val1, conv_val2, operation);
    }
    
    return 0;
}

