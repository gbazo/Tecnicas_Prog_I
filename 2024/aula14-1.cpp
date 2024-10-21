/*
Exercicio: Calculo de despesas com FOR

Descrição: Um usuário deseja calcular suas despesas mensais. O programa permitirá que ele insira quantas despesas ele quer informar e o valor de cada despesa e, ao final, mostrará o total gasto.

A saída desejada é:

Quantas despesas você gostaria de registrar? 5

Digite o valor da despesa 1: 2000
Digite o valor da despesa 2: 19.9
Digite o valor da despesa 3: 34.5
Digite o valor da despesa 4: 456
Digite o valor da despesa 5: 18.9

Total de despesas no mês: R$ 2529.3

*/

#include <iostream>
using namespace std;

int main() {
    int numeroDespesas;
    double totalDespesas = 0.0;

    cout << "Quantas despesas você gostaria de registrar? ";
    cin >> numeroDespesas;
    cout << endl;

    for (int i = 1; i <= numeroDespesas; i++) {
        double despesa;
        cout << "Digite o valor da despesa " << i << ": ";
        cin >> despesa;
        totalDespesas += despesa; // Soma a despesa ao total
    }

    cout << endl << "Total de despesas no mês: R$ " << totalDespesas << endl;

    return 0;
}
