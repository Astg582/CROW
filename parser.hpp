// parser.cpp

#include "parser.h"
#include <iostream>

bool valid_exp(std::string& src1) {
	int s = src1.size() - 3;
	std::string cw = ".cw";

	for (int i = 0; i < 3; ++i) {
		if (src1[s] != cw[i]) {
			std::cout << "Error: extended incorrectly!" << std::endl;
			exit(0);
		}
		++s;
	}

	return true;
}

bool is_op(std::ifstream& src){
	
	if (!src.is_open()) {
		std::cerr << "Error opening the file!" << std::endl;
		exit(0);
	}
	return	true;
}

