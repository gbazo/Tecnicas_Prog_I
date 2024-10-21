/*
VETORES COM STRING

Algoritmo com exemplo de um vetor do tipo string, criação e retorno do vetor
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string nomes[3] = {"Lula", "Bolsonaro", "Pizza"};

    for(int i = 0; i < 3; i++){
        cout << "Nome " << i + 1 << ": " << nomes[i];
    }

    return 0;
}