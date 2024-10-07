/*Escribe una funci�n nombrada cambio() que tenga un
par�metro en n�mero entero y seis par�metros de referencia
en n�mero entero nombrados cien,cincuenta,veinte,diez,cinco y uno,
respectivamente. La funcion tiene que considerar el valor entero
trasmitido como una cantidad en d�lares y convertir el valor
en el n�mero menor en billetes equivalenrtes*/

#include<iostream>
#include<conio.h>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int valor;
	int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	
	cout<<"Digite un valor: ";
	cin>>valor;
	//Llamamos a la funcion
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes a entregar commo cambio: "<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	getch();
	return 0;
}

void intercambiar(int valor,int& cien,int& cincuenta,int& veinte,int& diez, int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %=20;
	diez = valor/10;
	valor %=10;
	cinco = valor/5;
	uno = valor%5;
	
}
