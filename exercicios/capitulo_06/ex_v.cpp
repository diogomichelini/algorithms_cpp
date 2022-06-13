// Capitulo 06 | 6.4 Exercícios de Fixação | p. 145
// Data: 13/06/2022

/*
    v) Construir um programa que leia uma matriz A de uma dimensão do tipo vetor com 30 elementos do tipo inteiro. Ao final do programa, apresentar a quantidade de valores pares e ímpares existentes na referida matriz.
*/


#include <iostream>
using namespace std;


int main
(){
    int A[30], i, totpar=0, totimpar=0;

    // Entrada
    for (i=0 ; i<30 ; i++){
        cin >> A[i];
    }

    // Processamento
    for (i=0 ; i<30 ; i++){
        if (A[i] % 2 == 0){
            totpar++;
        } else{
            totimpar++
            ;
        }
    }

    // Saida
    cout << "total de numeros pares: " << totpar << "\nTotal de numeros impares: " << totimpar;

    return 0;
}