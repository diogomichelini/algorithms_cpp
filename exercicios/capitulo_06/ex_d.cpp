// Capitulo 06 | 6.4 Exercícios de Fixação | p. 143
// Data: 13/06/2022

/*
    d) Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguinte lei de formação: “todo elemento da matriz B deve ser o quadrado do elemento da matriz A correspondente”. Apresentar os elementos das matrizes A e B.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int A[15], B[15], i;
	
	for (i=0 ; i<15 ; i++){
		cin >> A[i];
		B[i] = pow(A[i], 2);  // função pow para exponenciação
	}
	
	// Saída
	for (i=0 ; i<15 ; i++){
		cout << A[i] << " - " << B[i] << "\n";
	}
	
	return 0;
}