#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int tamales, tamalesRestantes, bandidosYLider;
    double mitad, tamalesPorBandido;

    cin >> (tamales);

    mitad = ceil(tamales / 2.0);
    tamalesRestantes = tamales - mitad;

    cin >> bandidosYLider;
    int bandidos = bandidosYLider - 1;

    tamalesPorBandido = floor(tamalesRestantes / bandidos);
    int tamalesParaBandidos = tamalesPorBandido * bandidos;

    int restantes = tamalesRestantes - tamalesParaBandidos;
    int tamalesDeLider = mitad + restantes;

    cout << tamalesDeLider;

    return 0;
}