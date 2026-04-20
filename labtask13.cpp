#include <iostream>
using namespace std;

string calculatePoolState(double V, double P1, double P2, double H) {
    double totalWater = (P1 + P2) * H;

    if (totalWater < V)
        return "Not full";
    else
        return "Full or Overflow";
}

int main() {
    double V, P1, P2, H;

    cin >> V >> P1 >> P2 >> H;

    cout << calculatePoolState(V, P1, P2, H);

    return 0;
}