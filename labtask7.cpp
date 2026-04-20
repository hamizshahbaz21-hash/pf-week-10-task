#include <iostream>
using namespace std;

int multiplyBy5(int n) {
    return n * 5;
}

int main() {
    int num;

    cin >> num;

    cout << multiplyBy5(num);

    return 0;
}