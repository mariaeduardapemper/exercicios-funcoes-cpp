#include <iostream>

using namespace std;


int lerQuantidadeUsuarios() {

    int quantidade; 

    cin >> quantidade;

    return (quantidade);
}

int main () {

    int total = lerQuantidadeUsuarios();

    cout << total << endl;

    return 0;
}