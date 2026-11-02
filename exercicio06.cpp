#include <iostream>

using namespace std;

void verificarPrazo (int minutos) {

    if (minutos <= 30) {
        cout << "Dentro do prazo" << endl;
    }

    else {
        cout << "Prazo excedido" << endl;
    }


}

int main () {

    verificarPrazo(20);
    verificarPrazo(45);

    return 0;
}