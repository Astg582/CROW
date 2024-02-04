#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include "enums.h"
#include "types.h"
#include "types.hpp"
#include "parser.h"
#include "parser.hpp"



int main(){
	//ifstream open
	std::string src1;
	std::string tmp;
	std::cin >> src1;
	std::ifstream  src(src1);
	valid_exp(src1);
 	is_op(src);

	_Token ob;
	ob.set_pos(3);
	
		std::cout << "token position" << ob.get_pos() << std::endl; 
	

		
	ob.set_type(xt);
	std::cout <<"this is a type token" << ob.get_type() << std::endl; 

	KEYWORD k_w;
	

	while (!src.eof(), std::getline(src, tmp)) {
		if(tmp == k_w.get_kw(tmp)){
			std::cout << tmp << std::endl;
		}
	}
	
	src.close();
       return 0;
}

