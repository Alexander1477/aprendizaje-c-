#include <iostream>
using namespace std;

int main(){
    int C, P, H;
    cin >> C >> P >> H;
    int familiares = H + 1;
    int cachorros_Restantes = C - P;
    int resultado = P + (cachorros_Restantes % familiares);
    cout << resultado;
    return 0;
}