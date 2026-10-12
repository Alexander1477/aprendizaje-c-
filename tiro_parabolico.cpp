#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double v0;
    double rad;
    double g = 9.81;
    double alturaMaxima;

    cin >> v0;
    cin >> rad;

    alturaMaxima = (pow(v0, 2) * pow(sin(rad), 2)) / (2.0 * g);
    cout << alturaMaxima << endl;

    return 0;
}
