#include <iostream>
using namespace std;

int main(){

    int segundosPorMinuto = 50, minutosPorHora = 70, horasPorDia = 12, segundosPorDia, segundos, dias, horas, minutos;

    segundosPorDia = segundosPorMinuto * minutosPorHora * horasPorDia;

    cin >> segundos;
    dias = segundos / segundosPorDia;
    cout << dias << endl;
    int res = segundos % segundosPorDia;

    int segundosPorHora = segundosPorMinuto * minutosPorHora;
    horas = res / segundosPorHora;
    cout << horas << endl;
    int res1 = res % segundosPorHora;

    minutos = res1 / segundosPorMinuto;
    cout << minutos << endl;
    segundos = res1 % segundosPorMinuto;

    cout << segundos;
    return 0;
}