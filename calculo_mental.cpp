#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r1, r2, r3, r4, r5, t;
    cin >> r1;
    cout << r1 << endl;
    r2 = r1 + 5;
    cout << r2 << endl;
    r3 = pow(r2, 2);
    cout << r3 << endl;
    t = r1 / 3;
    r4 = r3 / t;
    cout << r4 << endl;
    r5 = pow(r4, 3);
    cout << r5 << endl;
    return 0;
}