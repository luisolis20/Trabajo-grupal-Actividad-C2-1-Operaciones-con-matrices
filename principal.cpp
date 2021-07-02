//====================================================
//PROGRAMA: OPERACIONES BASICAS
// AUTO : STALIN FRANCIS
// VESION: 1.02
//==================================================
#include<iostream>
#include<stdlib.h>
using namespace std;
#include "colaborador1.h"     // EN ESTE ARCHIVO VA LA FUNCION DE imprimir()
#include "colaborador2.h"     // EN ESTE ARCHIVO VA LA FUNCION DE sumar()
#include "colaborador3.h"     // EN ESTE ARCHIVO VA LA FUNCION DE restar()
#include "colaborador4.h"     // EN ESTE ARCHIVO VA LA FUNCION DE dividir()
#include "colaborador5.h"     // EN ESTE ARCHIVO VA LA FUNCION DE multipicar()

void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}



}

//FUCION PRINCIPAL
int main()
{
	int op,flag;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIO"<<endl<<endl;
	cout<<"1.- Ingresar los valores de las matrices \n";
	cout<<"2.- Obtener el producto de las dos matrices \n";
	cout<<"3.- Mostrar la potencias 2 de la primera matriz \n"; 
	cout<<"4.- Mostrar la transpuesta de la primera matriz \n";
	cout<<"5.- Calcular la media y varianza y compararlas \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
	cout<<"ESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES";
		ingresar(matriz1,matriz2);
		mostrar(matriz1);
		mostrar(matriz2);
		break;
	        case 2:
	// ESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES.
		producto(matriz1,matriz2,resultado);
		mostrar(resultado);
		break;
		case 3:
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
		potencia(matriz1,2,resultado);
		mostrar(resultado);
		break;
		case 4:
	// ESTA FUNCION CALCULA LA TRANSPUEST DE LA PRIMERA MATRIZ
		transpuesta(matriz1,resultado);
		mostrar(resultado);
		break;
		case 5:
	//CUADO CALCULA Y MUESTRA LAS MADIA Y VARIANZA DE LAS DOS MATRICES
		mediayvarianza(matriz1,matriz2);
		break;
		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);

	return(0);

}
