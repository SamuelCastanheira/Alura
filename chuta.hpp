#pragma once
#include <map>
#include <array>
#include <string>

namespace Forca {
	void chuta(std::map<char, bool>& chutou, std::array<char,5>& chutes_errados, int & quant_chutes_errados, const std::string& palavra_secreta);
}