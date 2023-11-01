// Situação problema:
// contagem de número positivos

// escreva um programa que receba uma quantidade de numeros N determinada pelo usuario e conte quantos destes são positivos

#include <iostream>

using namespace std;

int main(){
    double numeros;
    int contador = 0, n;

    cout << "Quantos numeros voce vai inserir?" << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros;
        if(numeros > 0){
            contador++;
        }
    }
    cout << "Qtd de valores positivos: " << contador << endl;
    return 0;
}
