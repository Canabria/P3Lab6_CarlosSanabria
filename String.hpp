#ifndef STRING_HPP
#define STRING_HPP
#include <iostream>
#include <string>
using namespace std;

class String {
	private:
		string cadena;
	public:
		String();
		void setCadena(string);
		string getCadena();
	 	void operator<<(string);
		void operator * (int);
		void operator ! ();
		
};
#endif