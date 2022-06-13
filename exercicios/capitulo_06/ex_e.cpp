// Capitulo 06 | 6.4 Exercícios de Fixação | p. 143
// Data: 13/06/2022

/*
    e) Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir uma matriz B de mesmo tipo, e cada elemento da matriz B deve ser o resultado da fatorial correspondente de cada elemento da matriz A. Apresentar as matrizes A e B.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int A[5], B[5], i, j;
	
	// entrada
	for (i=1 ; i<=5 ; i++){
		cin >> A[i];
	}
	
	// processamento
	for (i=1 ; i<=5 ; i++){
		B[i] = 1;
		for (j=1 ; j<=A[i] ; j++){
			B[i] = B[i] * j;
		}
	}
	
	// saida
	for (i=1 ; i<=5 ; i++){
		cout << A[i] << " - " << B[i] << "\n";
	}
	
	return 0;
}