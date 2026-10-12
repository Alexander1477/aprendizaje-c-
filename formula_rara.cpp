#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, z, f;
    double pi = 3.14159265358979323846;
    cin >> x >> y >> z;
    f = (x + x * ( y + pow(z, 2) ) ) / ( ( x + pi ) * ( y + pi ));
    cout << f;
    return 0;
}