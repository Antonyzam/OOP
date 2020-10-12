
#include <iostream>
using namespace std;
class estudiante{
	
	
	
	protected : string nombres,apellidos;
				int nota; 



	protected : 
				estudiante(string nom,string ape,int nott){
					nombres = nom;
					apellidos = ape;
					nota = nott;
				}
	 
	void mostrar();
};
