#include <iostream>
#include "imprime_erros.hpp"

void  Forca::imprime_erros(const std::array<char,5>& chutes_errados, const int quant_chutes_errados) {
        std::cout << "Chutes errados: ";
        for (int i=0;i < quant_chutes_errados;i++) {
            std::cout << chutes_errados[i] << " ";
        }
        std::cout << std::endl;
    }
