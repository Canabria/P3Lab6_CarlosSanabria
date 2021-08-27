#include <iostream>
#include <string>
#include "String.hpp"
using namespace std;

String::String(){
	
}
void String::setCadena(string cadena){
	this->cadena=cadena;
}
string String::getCadena(){
	return cadena;
}
void String::operator<<(string cadena1){
	setCadena(cadena1);
	cout<<cadena<<endl;
}
void String::operator * (int n){
	for(int i=0;i<n;i++){
		cout<<cadena;
	}
	cout<<endl;
}
void String::operator ! (){
	cout<<getCadena()<<endl;
}