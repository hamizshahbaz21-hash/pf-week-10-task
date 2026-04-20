#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience) {
    float bonusPercent = 0;

    if (score >= 90)
        bonusPercent = 20;
    else if (score >= 75)
        bonusPercent = 10;
    else
        bonusPercent = 5;

    if (experience >= 5)
        bonusPercent = bonusPercent + 5;

    float bonus = (bonusPercent / 100) * base;

    return base + bonus;
}

int main() {
    float base;
    int score, experience;

    cin >> base >> score >> experience;

    cout << calculateSalary(base, score, experience);

    return 0;
}