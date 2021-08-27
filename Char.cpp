#include <iostream>
#include "String.hpp"
#include "Char.hpp"
#include <string>
using namespace std;
Char::Char(){
}
void Char::setChar(char letra){
	this->letra=letra;
}
int Char::getChar(){
	return letra;
}
void Char::operator<<(char letra1){
	setChar(letra1);
	cout<<letra<<endl;
}
String* Char::operator + (char letra1){
	string cadena="";
	cadena+=letra;
	cadena+=letra1;
	String * s=new String();
	*s<<cadena;
	return s;
}
void Char::operator ! (){
	cout<<letra<<endl;
}