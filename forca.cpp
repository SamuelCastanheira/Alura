#include <iostream>
#include <string>
#include <map>
#include <array>
#include "nao_acertou.hpp"
#include "nao_enforcou.hpp"
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"


int main () {
    using namespace std;
    using namespace Forca;

    string palavra_secreta;
    map<char, bool> chutou;
    array<char,5> chutes_errados;
    int indice_chutes_errados=0;

    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta,chutou) && nao_enforcou(indice_chutes_errados)){
        imprime_erros(chutes_errados,indice_chutes_errados);

        imprime_palavra(palavra_secreta,chutou);

        chuta(chutou, chutes_errados,indice_chutes_errados, palavra_secreta);
    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(nao_acertou(palavra_secreta, chutou)){
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;

        cout << "Você deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }

    cin.get();
}