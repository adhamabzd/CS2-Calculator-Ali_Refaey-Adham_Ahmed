#include "calculator.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

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
