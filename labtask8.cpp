#include <iostream>
using namespace std;

string checkAlphabetCase(char ch) {
    if (ch == 'A')
        return "You have entered Capital A";
    else
        return "You have entered small A";
}

int main() {
    char ch;

    cin >> ch;

    cout << checkAlphabetCase(ch);

    return 0;
}