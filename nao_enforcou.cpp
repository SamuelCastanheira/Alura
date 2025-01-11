#include "nao_enforcou.hpp"


bool Forca::nao_enforcou(const std::vector<char> & chutes_errados){
    return chutes_errados.size() < 5;
}