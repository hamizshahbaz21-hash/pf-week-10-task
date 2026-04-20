#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

bool isStrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    return sum == original;
}

int main() {
    int num;

    cin >> num;

    if (isStrong(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}