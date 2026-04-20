#include <iostream>
using namespace std;

double convert(double v, string unit) {
    if (unit == "millimeters")
        return v * 1000000000;
    else if (unit == "centimeters")
        return v * 1000000;
    else if (unit == "kilometers")
        return v / 1000000000;
    else
        return v;
}

string pyramidVolume(double l, double w, double h, string unit) {
    double volume = (l * w * h) / 3;
    volume = convert(volume, unit);

    return to_string(volume) + " cubic " + unit;
}

int main() {
    double l, w, h;
    string unit;

    cin >> l >> w >> h >> unit;

    cout << pyramidVolume(l, w, h, unit);

    return 0;
}