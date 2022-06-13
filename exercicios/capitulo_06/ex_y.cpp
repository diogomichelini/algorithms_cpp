// Capitulo 06 | 6.4 Exercícios de Fixação | p. 145
// Data: 13/06/2022

/*
    y) Escrever um programa que leia uma matriz A de uma dimensão com 15 elementos numéricos inteiros. Apresentar o total de elementos pares existentes na matriz.
*/

#include <iostream>
using namespace std;

int main(){
	int A[15], totpar=0, i;
	
	for (i=0 ; i<15 ; i++){
		cin >> A[i];
		if (A[i] % 2 == 0){
			totpar++;
		}
	}
	
	cout << "\n\ntotal de numeros pares: " << totpar;
	
	return 0;
}