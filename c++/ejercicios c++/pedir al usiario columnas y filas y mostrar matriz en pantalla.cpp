/*Hacer un programa para rellenar una matriz pidiendo al usuario el n�mero de filas
y columnas, Posteriormente la matriz en pantalla*/ 


#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas ";
	cin>>columnas;
	
	//Almacenado elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//Mostrando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
