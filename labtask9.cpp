#include <iostream>
using namespace std;

bool isSymmetrical(int n) {
    int original = n;
    int rev = 0;

    rev = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);

    return (original == rev);
}

int main() {
    int num;

    cin >> num;

    if (isSymmetrical(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}