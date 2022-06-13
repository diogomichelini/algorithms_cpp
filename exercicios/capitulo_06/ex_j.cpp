// Capitulo 06 | 6.4 Exercícios de Fixação | p. 143
// Data: 13/06/2022

/*
    j) Elaborar um programa que leia uma matriz A do tipo vetor com 20 elementos inteiros. Construir uma matriz B dos mesmos tipo e dimensão da matriz A, sendo cada elemento da matriz B o somatório de 1 até o valor do elemento correspondente armazenado na matriz A. Se o valor do elemento da matriz A[1] for 5, o elemento correspondente da matriz B[1] deve ser 15, pois o somatório do elemento da matriz A é 1 + 2 + 3 + 4 + 5. Apresentar os elementos da matriz B.
*/

#include <iostream>
using namespace std;

int main (){
    int A[20], B[20], i, n=0, c=0;

    // ENTRADA
    for (i=0 ; i<20 ; i++){
        scanf ("%d", &A[i]);
    }

    // PROCESSAMENTO E SAIDA
    for (i=0 ; i<20 ; i++){
        while (c <= A[i]){
            B[i] = n + c;
            n = B[i];   
            c++;
        }
        cout << "B[" << i << "] = " << B[i] << "\n";
    }

    return 0;
    
}