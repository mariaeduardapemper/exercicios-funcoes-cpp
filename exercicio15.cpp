#include <iostream>

using namespace std;

void mostrarMenu() {

    cout << "1 - Cadastrar prioridades" << endl;
    cout << "2 - Exibir número de urgentes" << endl;
    cout << "3 - Sair" << endl;

}

void cadastrarPrioridades(int prioridades[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {

        do {
            cout << "Digite a prioridade: " << endl;
            cin >> prioridades[i];
        }

        while (prioridades[i] < 1 || prioridades[i] > 3);

    }
}

int contarUrgentes(int prioridades[], int tamanho) {

    int contador = 0;

    for(int i = 0; i < tamanho; i++) {

        if(prioridades[i] == 3) {

            contador++;
        }

    }

    return contador;

}


int main () {

    int prioridades[5];
    int opcao;
    bool cadastrado = false;

    do {
        mostrarMenu();
        cin >> opcao;

        switch(opcao) {
            case 1:
                cadastrarPrioridades(prioridades, 5);
                cadastrado = true;
                break;
            
            case 2: 
                if (cadastrado == true) {
                    int urgentes = contarUrgentes(prioridades, 5);
                    cout << "Chamados urgentes: "<< urgentes << endl;
                }

                else {
                    cout << "Primeiro cadastre as prioridades!" << endl;
                }
                break;

            case 3:
                cout << "Encerrando o programa..." << endl;
                break;
        }
    }

     while (opcao != 3);

    return 0;
}