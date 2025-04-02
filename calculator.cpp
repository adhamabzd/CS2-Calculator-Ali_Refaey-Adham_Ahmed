#include "calculator.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <cctype>
#include <sstream>
#include <cmath>
#include <map>
using namespace std;

double evaluateExpression(const string& expression) {
    stack<double> values;
    stack<char> ops;
    istringstream input(expression);
    char token;

    while (input >> token) {
        if (isdigit(token)) {
            input.putback(token);
            double value;
            input >> value;
            values.push(value);
        } 
        else if (token == '(') {
            ops.push(token);
        } 
        else if (token == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(a, b, op));
            }
            ops.pop();  // Remove '('
        } 
        else if (token == '+' || token == '-' || token == '*' || token == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(token)) {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(a, b, op));
            }
            ops.push(token);
        }
    }

    while (!ops.empty()) {
        double b = values.top(); values.pop();
        double a = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(a, b, op));
    }

    return values.top();
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { return (b != 0) ? static_cast<double>(a) / b : 0; }

long long factorial(int n) {
    if (n < 0) return -1;
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int generateRandom(int min, int max) {
    srand(time(0));
    return min + rand() % (max - min + 1);
}
