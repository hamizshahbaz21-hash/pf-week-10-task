#include <iostream>
using namespace std;

int main() {
    double price, tax = 0;
    char type;

    cin >> price >> type;

    if (type == 'A')
        tax = price * 0.10;
    else if (type == 'B')
        tax = price * 0.15;
    else if (type == 'C')
        tax = price * 0.20;
    else
        tax = 0;

    double finalPrice = price + tax;

    cout << finalPrice;

    return 0;
}