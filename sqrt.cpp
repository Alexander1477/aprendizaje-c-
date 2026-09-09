#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float miFloat = 0.0f; // Por default cuando asignamos un decimal a una variable, el compilador
                          // lo interpreta como un número de 64 bits pero los float son de 32 bits.
                          // Para solucionar esto agregamos la letra f.

    cin >> miFloat;

    float raiz = sqrt(miFloat);
    cout << raiz << endl;

    return 0;
}
