#include "umg.cpp"
#include <iostream>
using namespace std;
main(){
	
	cout<<"---------------------------ESTUDIANTES------------------------ " <<endl;
	
	
	
	string codigo,nombres,apellidos;
	int nota;
	cout<< " Ingrese codigo:";
	cin>>codigo;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Nota:";
	cin>>nota;

 cout<<"---------------------------------------------------------- " <<endl;

	umg obj = umg(nombres,apellidos,nota,codigo);
	obj.mostrar();
	cout<<"Modifique codigo:";
	cin>>codigo;
	obj.setcodigo(codigo);
	cout<<"Modifique Nombres:";
	cin>>nombres;
	obj.setNombres(nombres);
	cout<<"Modifique Apellidos:";
	cin>>apellidos;
	obj.setApellidos(apellidos);
	cout<<"Modifique notas:";
	cin>>nota;
	obj.setnota(nota);
	cout<<"---------------------------------------------------------- " <<endl;
	cout<<"codigo:"<<obj.getcodigo()<<endl;
	cout<<"Nombres:"<<obj.getNombres()<<endl;
	cout<<"Apellidos:"<<obj.getApellidos()<<endl;
	cout<<"nota:"<<obj.getnota()<<endl;
 
	

}
	
	
 
