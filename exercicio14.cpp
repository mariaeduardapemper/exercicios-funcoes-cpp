#include <iostream>

using namespace std;

int somarTarefas(int tarefas[], int tamanho) {

    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma = soma + tarefas[i];
    }

    return soma;
}

bool atingiuMeta(int total, int meta) {

    if (total >= meta) {
        return true;
    }

    else {
        return false;
    }

}

int main () {

    int tarefas[5] = {7, 9, 8, 6, 10};

    int total = somarTarefas(tarefas, 5);

    bool resultado = atingiuMeta(total, 35);

    if (resultado == true) {
        cout << "Meta atingida" << endl;
    }

    else {
        cout << "Meta não atingida" << endl;
    }


    return 0;
}