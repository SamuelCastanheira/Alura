#include <vector>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"

std::string Forca::sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    return palavras[indice_sorteado];
}