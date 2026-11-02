#include <iostream>

using namespace std;


int calcularPontos(int a, int b, int c) {

    return (a + b + c);
}


int main () {

    calcularPontos(3, 5, 8);

    cout << calcularPontos(3, 5, 8) << endl;



    return 0;
}