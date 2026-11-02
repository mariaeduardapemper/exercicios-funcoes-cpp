#include <iostream>

using namespace std;

int contarAtrasos(int tempos[]){

    int contador = 0;

    for (int i = 0; i < 5; i++) {

        if (tempos[i] > 30) {
            contador++;
        }
    }

    return contador;

}


int main () {

    int tempos [5] = {15, 25, 40, 10, 35};

    int resultado = contarAtrasos(tempos);

    cout << resultado << endl;

    return 0;
}