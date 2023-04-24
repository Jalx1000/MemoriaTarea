//---------------------------------------------------------------------------

#pragma hdrstop

#include "CSMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iomanip>

CSMemoria::CSMemoria(){
	mem = new NodoM[MAX_MEMORIA];
	for( int i = 0 ; i<MAX_MEMORIA; i++){
		mem[i].dato = 0;
		mem[i].link = i+1;
	}
	mem[MAX_MEMORIA-1].link = -1;
	libre = 0 ;
}

void CSMemoria::mostrar_memoria(){

	cout<<"+";
	for(int i=2;i<=3+4+8+3+5; i=i+1){
		cout<<"-";
	};
	cout<<"+"<<"\n";

	cout<<"|DIR|"<<"DATO|"<<"---ID---|"<<"LINK|\n";
	for (int i = 0; i<MAX_MEMORIA; i = i+1){
		cout<< "|"<<setw(3)<<i<<"|" <<setw(4)<<mem[i].dato<< "|" <<setw(8)<<mem[i].id<< "|"<<setw(4)<<mem[i].link<<"|\n";
	};


	cout<<"+";
	for(int i=2;i<=2+4+8+4+5; i=i+1){
		cout<<"-";
	};
	cout<<"+\n";
	cout<<"LIBRE:"<<libre<<"\n";

	//cout<<"ESPACIO DISPONIBLE:"<<Espacio_disponible()<<"\n";
   //	cout<<"ESPACIO OCUPADO:"<<Espacio_ocupado()<<"\n";
};

direccion_mem CSMemoria::new_espacio(string cadena){
    int cant = N
}

