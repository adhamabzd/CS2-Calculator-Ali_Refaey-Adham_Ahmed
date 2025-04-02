#include "calculator.h"
#include <iostream>

int main() {
    cout << "Addition: " << add(10, 5) << endl;
    cout << "Subtraction: " << subtract(10, 5) <<endl;
    cout << "Multiplication: " << multiply(10, 5) <<endl;
    cout << "Division: " << divide(10, 5) << sendl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(10, 5) << endl;
    cout << "LCM: " << lcm(10, 5) << endl;
    cout << "Random Number: " << generateRandom(1, 10) << endl;
    return 0;
}
