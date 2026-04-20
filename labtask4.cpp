#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance, angle, radians, height;

    cout << "Enter distance (in feet): ";
    cin >> distance;

    cout << "Enter angle (in degrees): ";
    cin >> angle;

    radians = angle / 57.2958;

    height = distance * tan(radians);

    cout << "Height of tree = " << height << " feet";

    return 0;
}