#include "estudiante.cpp"
#include <iostream>
using namespace std;
class umg : estudiante {
 
	private : string codigo;
	 
	public:
	umg(string nom,string ape,int nott, string n):estudiante(nom,ape,nott){
		codigo = n;
	}
 
	void setcodigo(string n){codigo = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setnota(int nott){nota = nott;}
 
	string getcodigo(){return codigo;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	int getnota(){return nota;}
 
	void mostrar(){
 
		cout<<codigo<<","<<nombres<<","<<apellidos<<","<<nota<<endl;
	}
	
};
