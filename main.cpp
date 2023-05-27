#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    int opcao;
    int opcao_pc;
    int cont_pc = 0;
    int cont_jog = 0;

    srand(time(0));

    do{
        cout << "\n\n---JOGO PEDRA PAPEL TESOURA---\n\n";
        cout << "Escolha uma opção\n";
        cout << "1 - Pedra\n";
        cout << "2 - Papel\n";
        cout << "3 - Tesoura\n";
        cout << "0 - Fechar\n";
        cin >> opcao;
        system("cls");

        opcao_pc = 1 + rand()%3;
        if(opcao == 1 && opcao_pc == 2){
            cout << "Você escolheu Pedra\n";
            cout << "O computador escolheu Papel\n\n";
            cout << "O computador venceu!!\n";
            cont_pc ++;
            cout << "PLACAR\n";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao == 1 && opcao_pc == 3){
            cout << "Você escolheu Pedra\n";
            cout << "O computador escolheu Tesoura\n\n";
            cout << "Você venceu!!\n";
            cont_jog ++;
            cout << "\nPLACAR";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao == 1 && opcao_pc == 1){
            cout << "Você escolheu Pedra\n";
            cout << "O computador escolheu Pedra\n\n";
            cout << "Deu empate!!\n";
        }
        if(opcao == 2 && opcao_pc == 1){
            cout << "Você escolheu Papel\n";
            cout << "O computador escolheu Pedra\n\n";
            cout << "Você venceu!!\n";
            cont_jog ++;
            cout << "\nPLACAR";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao == 2 && opcao_pc == 2){
            cout << "Você escolheu Papel\n";
            cout << "O computador escolheu Papel\n\n";
            cout << "Deu empate!!\n\n";
        }
        if(opcao ==2 && opcao_pc == 3){
            cout << "Você escolheu Papel\n";
            cout << "O computador escolheu Tesoura\n\n";
            cout << "O computador venceu!!\n";
            cont_pc ++;
            cout << "\nPLACAR";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao == 3 && opcao_pc == 1){
            cout << "Você escolheu Tesoura\n";
            cout << "O computador escolheu Pedra\n\n";
            cout << "O computador venceu!!\n\n";
            cont_pc ++;
            cout << "\nPLACAR";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao == 3 && opcao_pc == 2){
            cout << "Você escolheu Tesoura\n";
            cout << "O computador escolheu Papel\n\n";
            cout << "Você venceu!!\n";
            cont_jog ++;
            cout << "\nPLACAR";
            cout << "\nVocê " << cont_jog;
            cout << "\nComputador " << cont_pc;
        }
        if(opcao ==3 && opcao_pc == 3){
            cout << "Você escolheu Tesoura\n";
            cout << "O computador escolheu Tesoura\n\n";
            cout << "Deu empate!!\n\n";
        }
    }
    while(opcao != 0);
    cout << "Jogo finalizado!!!";
    return 0;
}
