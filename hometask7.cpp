#include <iostream>
using namespace std;

float calculateBalance(float balance, int years) {
    float rate = 0;

    if (balance < 10000)
        rate = 5;
    else if (balance <= 50000)
        rate = 7;
    else
        rate = 10;

    if (years >= 3)
        rate = rate + 2;

    return balance + (balance * rate / 100);
}

int main() {
    float balance;
    int years;

    cin >> balance >> years;

    cout << calculateBalance(balance, years);

    return 0;
}