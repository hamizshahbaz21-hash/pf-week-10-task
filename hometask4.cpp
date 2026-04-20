#include <iostream>
using namespace std;

string projectTimeCalculation(int needed, int days, int workers) {
    double workingDays = days * 0.9;
    double totalHours = workingDays * workers * 10;

    int difference = totalHours - needed;

    if (difference >= 0)
        return "Yes! " + to_string(difference) + " hours left.";
    else
        return "Not enough time! " + to_string(-difference) + " hours needed.";
}

int main() {
    int neededHours, days, workers;

    cin >> neededHours >> days >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}