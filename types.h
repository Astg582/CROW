// types.h
#ifndef TYPES_H
#define TYPES_H

#include <unordered_map>
#include "enums.h"  // Включаем enums.h

class KEYWORD {
	public:
		std::unordered_map<std::string, std::string> _KeyWord;
		std::unordered_map<std::string, int> _op;

	public:
		KEYWORD();
		std::string get_kw(std::string&);
};

class _Token {
	private:
		int pos;
		type_key ty;	
		std::string tok_n;
	public:

		void set_pos(const int p);
		void set_type(const type_key);
		type_key get_type(); 
		void set_tokn(const std::string&);
		int get_pos();
		std::string get_tokn();
};

#endif // TYPES_H

