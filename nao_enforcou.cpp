#include "nao_enforcou.hpp"


bool Forca::nao_enforcou(const int quant_chutes_errados){
    return quant_chutes_errados < 5;
}