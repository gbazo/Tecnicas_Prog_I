/*2. Soma de Duas Matrizes
Problema: Crie um programa que leia duas matrizes 3x3 e imprima a soma destas matrizes.
*/

#include <iostream>

using namespace std;

int main(){
    int matrizA[3][3], matrizB[3][3], matrizSoma[3][3];
    cout << "Digite os elementos da primeira matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrizA[i][j];
        }
    }
    cout << "Digite os elementos da segunda matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrizB[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << "Matriz resultante da soma: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrizSoma[i][j] <<  " ";
        }
        cout << endl;
    }
    return 0;
}
