#include "Integer.hpp"
#include <iostream>
using namespace std;
Integer::Integer() {

}
Integer::Integer(int integer){
	this->integer=integer;
}
void Integer::setInteger(int integer) {
	this->integer=integer;
}
int Integer::getInteger() {
	return integer;
}
void  Integer::operator<<(int num) {
	this->integer=num;
}
void Integer::operator + (int num) {
	integer=integer+num;
	cout<<integer<<endl;
}
void Integer::operator - (int num) {
	integer=integer-num;
	cout<<integer<<endl;
}
void Integer::operator * (int num) {
	integer=integer*num;
	cout<<integer<<endl;
}
void Integer::operator / (int num) {
	integer=integer/num;
	cout<<integer<<endl;
}
void Integer::operator ! () {
	cout<<integer<<endl;
}