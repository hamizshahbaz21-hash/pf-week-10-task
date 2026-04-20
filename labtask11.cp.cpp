#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hour, minute;

    cin >> hour >> minute;

    minute = minute + 15;

    if (minute >= 60) {
        minute = minute - 60;
        hour = hour + 1;
    }

    if (hour >= 24) {
        hour = hour - 24;
    }

    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute;

    return 0;
}