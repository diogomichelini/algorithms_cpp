// Capitulo 06 | 6.4 Exercícios de Fixação | p. 143
// Data: 11/06/2022

/*
    c) Escrever um programa que leia duas matrizes (A e B) do tipo vetor com 20 elementos reais. Construir uma matriz C, sendo cada elemento da matriz C a subtração de um elemento correspondente da matriz A com um elemento correspondente da matriz B. Ao final, apresentar os elementos da matriz C.
*/

#include <iostream>
using namespace std;

int main(){
    float A[20], B[20], C[20];
    int i;

    cout << "Insira os elementos da matriz A: \n";
    for (i=0 ; i<=20 ; i++){
        cin >> A[i];
    }

    cout << "\n\n Insira os elementos da matriz B: \n";
    for (i=0 ; i<=20 ; i++){
        cin >> B[i];
    }

    cout << "\n\nConfira o resultado (Matriz C): \n";
    for (i=0 ; i<=20 ; i++){
        C[i] = A[i]-B[i];
        cout << "C[" << i << "] = " << C[i] << "\n";
    }

    return 0;
}