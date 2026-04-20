#include <iostream>
using namespace std;

string checkOddishEvenish(int n) {
    int sum = 0;

    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;

    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}

int main() {
    int num;

    cin >> num;

    cout << checkOddishEvenish(num);

    return 0;
}