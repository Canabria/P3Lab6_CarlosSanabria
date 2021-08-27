#include <iostream>
#include <string>
#include "CHAR.hpp"
#include "INTEGER.hpp"
#include "STRING.hpp"
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int MENU();
int SUBMENU_INT();

int MENU() {
	int op = 0;
	cout<<"MENU\n"
	    <<"1. Agregar INTEGER\n"
	    <<"2. Agregar CHAR\n"
	    <<"3. Agregar STRING\n"
	    <<"4. Operaciones de INTEGER\n"
	    <<"5. Operaciones de CHAR\n"
	    <<"6. Operaciones de STRING\n"
	    <<"7. Salir\n";
	cout<<"\n";
	cout<<"Ingrese su opcion Porfavor: \n";
	cout<<"===>";
	cin>>op;
	return op;
}
int SUBMEN_INT() {
	int op1=0;
	cout<<"SUBMENU INTEGER\n"
	    <<"1. SUMA\n"
	    <<"2. RESTA\n"
	    <<"3. MULTIPLICACION\n"
	    <<"4. DIVISION\n"
	    <<"5. Asingacion un nuevo numero\n"
	    <<"6. Imprimir todos los indices actuales\n";
	cout<<"\n";
	cout<<"Ingrese su opcion: \n";
	cout<<"===> ";
	cin>>op1;
	return op1;
}

int main() {
	vector<Integer*> inte;
	vector<Char*> charac;
	vector<String*>sts;
	int op=0;
	while((op= MENU())!=7) {
		switch(op) {
			case 1: {
				cout << "Agregar INTEGER\n";
				int integer;
				cout<<"Ingrese el integer porfavor: \n";
				cout<<"-->";
				cin>>integer;
				Integer * i=new Integer();
				*i<<integer;
				inte.push_back(i);
				cout<< "\n";
				cout << "Fin Agregar INTEGER\n";
				break;
			}
			case 2: {
				cout << "Agregar CHAR\n";
				cout<<"Ingrese un character: \n"
				    <<"-->";
				char l;
				cin>>l;
				Char * c=new Char();
				*c<<l;
				charac.push_back(c);
				cout<< "\n";
				cout << "Fin Agregar CHAR\n";
				break;
			}
			case 3: {
				cout << "Agregar STRING\n";
				cout<<"Ingrese un cadena: \n"
				    <<"-->";
				string cadena;
				cin.ignore();
				getline(cin,cadena);
				String * s=new String();
				*s<<cadena;
				sts.push_back(s);
				cout << "\n";
				cout << "Fin de Agregar STRING\n";
				break;
			}
			case 4: {
				cout << "OPERACIONES INTEGER\n";
				cout<< "\n";
				int n=0;
				for(int i=0; i<inte.size(); i++) {
					Integer * aux=inte.at(i);
					cout<<i<<") ";
					!(*aux);
				}
				cout<<"Ingrese el indice del numero que sea hacer operaciones con: \n"
				    <<"-->";
				cin>>n;
				Integer * aux= inte.at(n);
				int op1;
				op1=SUBMEN_INT();
				switch(op1) {
					case 1: {
						cout<<"Suma\n";
						cout<<"Ingrese el numero que desea sumar: \n"
						    <<"-->";
						int suma=0;
						cin>>suma;
						*aux+suma;
						cout<<"Fin de suma\n";
						break;
					}
					case 2: {
						cout<<"Resta\n";
						cout<<"Ingrese el numero que desea restar: \n"
						    <<"-->";
						int resta=0;
						cin>>resta;
						*aux-resta;
						cout<<"Fin de resta\n";
						break;
					}
					case 3: {
						cout<<"Multiplicacion\n";
						cout<<"Ingrese el numero que desea multiplicar: \n"
						    <<"-->";
						int mult=0;
						cin>>mult;
						*aux*mult;
						cout<<"Fin de multiplicacion\n";
						break;
					}
					case 4: {
						cout<<"Division\n";
						cout<<"Ingrese el numero que desea divir: \n"
						    <<"-->";
						int div=0;
						cin>>div;
						*aux/div;
						cout<<"Fin de Division\n";
						break;
					}

					case 5: {
						cout<<"Asignacion\n";
						cout<<"Ingrese el numero al que desea cambiar a: \n"
						    <<"-->";
						int asig=0;
						cin>>asig;
						*aux<<asig;
						cout<<"Fin de Asignacion\n";
						break;
					}

					case 6: {
						cout<<"Imprimir\n";
						cout<<"Los numero enteros en sistema son: \n";
						for(int i=0; i<inte.size(); i++) {
							Integer * aux1=inte.at(i);
							cout<<i<<") ";
							!(*aux1);
						}
						cout<<"Fin de Imprimir\n";
						break;
					}
				}
				cout << "Fin de OPERACIONES INTEGER\n";
				break;
			}
			case 5: {
				cout << "OPERACIONES CHAR\n";
				int n;
				for(int i=0; i<charac.size(); i++) {
					Char* aux=charac.at(i);
					cout<<i<<") ";
					!(*aux);
				}
				cout<<"Ingrese el indice del character: \n"
				    <<"-->";
				    cin>>n;
				Char * aux=charac.at(n);
				char t;
				cout<<"Ingrese el character que desea acumular: \n"
				    <<"-->";
				cin>>t;
				String *m=(*aux+t);
				sts.push_back(m);
				cout<< "\n";
				cout << "Fin de OPERACIONES CHAR\n";
				break;
			}
			case 6: {
				cout << "--------OPERACIONES STRING-------\n";
				int n;
				for(int i=0; i<sts.size(); i++) {
					String* aux=sts.at(i);
					cout<<i<<") ";
					!(*aux);
				}
				cout<<"Ingrese el indice del character: \n"
				    <<"-->";
				    cin>>n;
				String * aux=sts.at(n);
				int m=0;
				cout<<"Ingrese el numero de veces que desea repetir: \n"
				    <<"-->";
				cin>>m;
				*aux*m;
				cout<< "\n";
				cout<< "\n";
				cout << "----Fin de OPERACIONES STRING----\n";
				break;
			}
		}
		if(op > 1 && op < 7) {
			cout<< "\n";
		}
	}
	for(int i=0; i<inte.size(); i++) {
		Integer* aux=inte.at(i);
		delete aux;
	}
	for(int i=0; i<charac.size(); i++) {
		Char* aux=charac.at(i);
		delete aux;
	}
	for(int i=0; i<sts.size(); i++) {
		String* aux=sts.at(i);
		delete aux;
	}
	return 0;
}