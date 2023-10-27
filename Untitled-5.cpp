/* 1. Leitura e Impressão de uma Matriz 4x4
Problema: Crie um programa que leia os valores de uma matriz 4x4 e, em seguida, imprima esta matriz.

matriz[2][2]
[0  1] - (0,0) (0,1) Linha, coluna
[2  3] - (1,0) (1,1)

matriz[4][4]
[0  1  2  3] (0,0)
[1  2  3  4]
[5  6  7  8]
[9  1  2  3] (4,4)
-----------------------------------------------
biblioteca

função principal(){
    inteiro array matriz[4][4]

    escreva("Digite os elementos da matriz 4x4: ")
    para (int i = 0; i < 4; i++){
        para (int j = 0; j < 4; j++){
            cin >> matriz[i][j]
        }
    }
    escreva("matriz inserida: ")
    para (int i = 0; i < 4; i++){
        para (int j = 0; j < 4; j++){
            cout <<  matriz [i][j] << " ";
        }
        cout << endl;
    }
    retorna 0
}
*/

#include <iostream>
using namespace std;

int main(){
    int matriz[4][4];

    cout << "Digite os elementos da matriz 4x4: " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz inserida: " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

