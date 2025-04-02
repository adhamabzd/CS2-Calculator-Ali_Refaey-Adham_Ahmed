#include <iostream>
#include "calculator.h"

int main() {
    string expr;
    cout << "Enter a mathematical expression: ";
    getline(cin, expr);
    
    try {
        double result = evaluateExpression(expr);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
