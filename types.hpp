
#ifndef TYPES_HPP
#define TYPES_HPP

#include "types.h"
#include "enums.h" // Включаем enums.h

void _Token::set_pos(const int p) {
    this->pos = p;
}

void _Token::set_type(const type_key a) {
    this->ty = a;
}

type_key _Token::get_type() {
    return this->ty;
}

void _Token::set_tokn(const std::string& oc) {
    this->tok_n = oc;
}

int _Token::get_pos() {
    return this->pos;
}

std::string _Token::get_tokn() {
    return this->tok_n;
}

KEYWORD::KEYWORD (){

	this->_KeyWord["for"] = "for";
	this->_KeyWord["while"] = "while";
	this->_KeyWord["if"] = "if";
	this->_KeyWord["else"] = "else";
	this->_KeyWord["brack"] = "brack";
	this->_KeyWord["continue"] = "continue";
/*	this->_KeyWord["numb"] = "numb";
	this->_KeyWord["xt"] = "xt";
	this->_KeyWord["any"] = "any";
	this->_KeyWord["none"] = "none";*/
	this->_op["~|"] = 15;
	this->_op["|~"] = 4;
	this->_op["["] = 5;
  	this->_op["]"] = 5;
	this->_op["`"] = 6;
	this->_op["-"] = 8;
	this->_op["+"] = 7;
	this->_op["*"] = 9;
 	this->_op["tyof()"] = 3;
	this->_op["("] = 1;
	this->_op[")"] = 1;
	this->_op["/"] = 10;
}

std::string KEYWORD::get_kw(std::string& st) {
    return this->_KeyWord[st];
}


#endif // TYPES_HPP

