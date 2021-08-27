#ifndef CHAR_HPP
#define CHAR_HPP
#include <iostream>
#include "String.hpp"
using namespace std;

class Char {
	private:
		char letra;
	public:
		Char();
		void setChar(char);
		int getChar();
	 	void operator<<(char);
		String* operator + (char);
		void operator ! ();
		
};
#endif