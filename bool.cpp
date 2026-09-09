#include <iostream>

using namespace std;

int main() {
    bool esDeNoche = false;
    bool estaSoleado = true;
    bool estaNublado = false;
    bool voyASalir = true;
    int temperaturaAmbiente = 13;

    bool necesitoCargarParaguas = voyASalir && estaNublado;
    bool necesitoUsarBloqueadorSolar = voyASalir && estaSoleado;
    bool haceFrio = temperaturaAmbiente <= 17;
    bool necesitoCargarSueter = voyASalir && haceFrio;
    bool necesitoLlevarMochila = necesitoCargarParaguas || necesitoCargarSueter;

    if (necesitoCargarParaguas) {
        cout << "Necesito cargar paraguas porque voy a salir y esta nublado" << endl;
    }
    if (necesitoUsarBloqueadorSolar) {
        cout << "Necesito usar bloqueador solar porque voy a salir y esta soleado" << endl;
    }
    if (necesitoCargarSueter) {
        cout << "Necesito cargar sueter porque voy a salir y hace frio" << endl;
    }
    if (necesitoLlevarMochila) {
        cout << "Necesito llevar mochila porque necesito cargar mochila y/o paraguas" << endl;
    }

    return 0;
}
