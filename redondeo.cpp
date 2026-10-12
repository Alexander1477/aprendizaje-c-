#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double miFloat = -2.91234;

cout << miFloat << endl;
cout << round(miFloat) << endl; //entero mas cercano
cout << floor(miFloat) << endl; //entero menor
cout << ceil(miFloat) << endl; //entero mayor
cout << trunc(miFloat) << endl; //elimina el decimal

    return 0;
}
