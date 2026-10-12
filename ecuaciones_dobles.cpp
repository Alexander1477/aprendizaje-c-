#include <iostream>
using namespace std;

int main(){
    double a, b, c; 
    double d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    double D = a * e - b * d;
    double x = (c * e - b * f)/D; 
    double y = (a * f - c * d)/D;

    cout << x << " " << y;
    return 0;
}