#ifndef Integer_HPP
#define Integer_HPP
#include <iostream>
using namespace std;

class Integer {
	private:
		int integer;
	public:
		Integer();
		Integer(int);
		void setInteger(int);
		int getInteger();
	 	void operator<<(int num);
		void operator + (int);
		void operator - (int);
		void operator * (int);
		void operator / (int);
		void operator ! ();
		
};
#endif