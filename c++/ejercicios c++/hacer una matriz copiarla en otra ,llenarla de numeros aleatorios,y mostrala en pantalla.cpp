/*Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarlas de n�merros aleatorios,copiarl el 
contenido a otra matriz y por �ltimo mostrarla en pantalla*/


#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std; 


int main(){
	int matriz[100][100],filas,columnas;
	int matriz2[100][100],dato=0;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	srand(time(NULL));
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				dato = 1+rand()%(100);//numeros aleatorios del 1 al 100
				matriz[i][j] = dato;
		}
	}
	
	//copiando el contenido a una nueva matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = matriz [i][j];
		}
	}
	
	//mostrando en pantalla la nueva matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
