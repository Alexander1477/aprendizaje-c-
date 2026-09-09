#include <iostream>

using namespace std;

int main() {
    int miEntero = 100;

    miEntero = miEntero / 10; // miEntero ahora vale 10.
    miEntero = miEntero * 10; // miEntero nuevamente vale 100.
    miEntero = miEntero + 50; // miEntero vale 150.
    miEntero = miEntero - 50; // miEntero regresó a su valor inicial, 100.

    miEntero = miEntero + 100 * 2; // miEntero vale 300 porque la multiplicación tiene precedencia sobre la suma.
    miEntero = (miEntero + 100) * 2; // miEntero vale 800 porque cambiamos la precedencia por el uso de paréntesis.

    miEntero -= 10; // miEntero vale 790 porque hacer -= es equivalente a miEntero = miEntero - 10;
    miEntero = miEntero % 100; // miEntero vale 90 porque % es el operador módulo.
    miEntero++; //miEntero vale 91 porque ++ es equivalente a sumarle 1.

    cout << miEntero << endl;

    return 0;
}