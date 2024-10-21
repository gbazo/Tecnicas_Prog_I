/*
Modificaçao de valores do array
*/

#include <iostream>

using namespace std;

int main(){
    int numeros[5] = {1, 2, 3, 4, 5};

    // modificando os valores para o dobro de cada elemento
    for(int i = 0; i < 5; i++){
        numeros[i] *= 2;
    }

    // exibindo os novos valores
    for(int i = 0; i < 5; i++){
        cout << "Novo valor do elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}