#include <iostream>

using namespace std;

float calcularMedia(int notas[], int tamanho) {

    float soma = 0;

    for(int i = 0; i < tamanho; i++) {

        soma = soma + notas[i];

    }
   
    return soma / tamanho;


}


void mostrarSituacao(float media) {

        if(media >= 7) {
            cout << "Aprovado" << endl;
        }

        else {
            cout << "Reprovado" << endl;
        }
}

int main () {

    int notas[5] = {6, 8, 7, 9, 5};

    float media = calcularMedia(notas, 5);

    mostrarSituacao(media); 

    cout << "Média: " << media << endl;


    return 0;
}