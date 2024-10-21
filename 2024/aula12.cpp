// URNA ELETRONICA SIMPLES
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int opcao, votar;
    int votosCandidato1 = 0;
    int votosCandidato2 = 0;
    int votosCandidato3 = 0;
    bool votacaoAtiva = true;

    do {

        cout << "\nMenu da Urna Eletrônica" << endl;
        cout << "1. VOTAR" << endl;
        cout << "2. Ver Resultados" << endl;
        cout << "3. Encerrar Votação" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                system("clear"); // system("cls") windows;
                
                cout << "\n### CANDIDATOS ###" << endl;
                cout << "1. Seu Madruga" << endl;
                cout << "2. Naruto Uzumaki" << endl;
                cout << "3. Ash Ketchum" << endl;
                cout << "Escolha uma opção: ";
                cin >> votar;

                switch (votar){
                    case 1: // Voto para Candidato 1
                        votosCandidato1++;
                        cout << "Você votou no Seu Madruga." << endl;
                        break;

                    case 2: // Voto para Candidato 2
                        votosCandidato2++;
                        cout << "Você votou no Naruto Uzomaki." << endl;
                        break;

                    case 3: // Voto para Candidato 3
                        votosCandidato3++;
                        cout << "Você votou no Ash ketchum." << endl;
                        break;
                    default: // Opção inválida
                        cout << "Opção inválida. Tente novamente." << endl;
                        break;
                } 
                break;

            case 2: // Ver resultados
                cout << "\nResultados da Votação:" << endl;
                cout << "Candidato 1 - Seu Madruga: " << votosCandidato1 << " votos" << endl;
                cout << "Candidato 2 - Naruto Uzomaki: " << votosCandidato2 << " votos" << endl;
                cout << "Candidato 3 - Ash ketchum: " << votosCandidato3 << " votos" << endl;
                break;

            case 3: // Encerrar votação
                votacaoAtiva = false;
                cout << "Votação encerrada." << endl;
                break;

            default: // Opção inválida
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }

    } while (votacaoAtiva); // Continua até o usuário escolher encerrar a votação

    // Exibe resultados finais após encerrar a votação
    float vt1 = votosCandidato1;
    float vt2 = votosCandidato2;
    float vt3 = votosCandidato3;

    cout << fixed << setprecision(2);
    cout << "\nResultados Finais:" << endl;
    cout << "Candidato 1 - Seu Madruga: " << votosCandidato1 << " votos " << (vt1 / (vt1 + vt2 + vt3)) * 100 << " %" << endl;
    cout << "Candidato 2 - Naruto Uzomaki: " << votosCandidato2 << " votos " << (vt2 / (vt1 + vt2 + vt3)) * 100 << " %" << endl;
    cout << "Candidato 3 - Ash ketchum: " << votosCandidato3 << " votos " << (vt3 / (vt1 + vt2 + vt3)) * 100 << " %" << endl;

    return 0;
}
