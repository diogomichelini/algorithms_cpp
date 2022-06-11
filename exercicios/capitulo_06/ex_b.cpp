// Capitulo 06 | 6.4 Exercícios de Fixação | p. 143
// Data: 11/06/2022

/*
    b) Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir uma matriz B de mesma dimensao com os elementos da matriz A multiplicados por 3. O elemento B[1] deve ser implicado pelo elemento A[1]*3 e assim por diante, ate 8. Apresentar a matriz B.
*/

#include <iostream>
using namespace std;

int main(){
    int A[7], B[7], i;

    for (i=0 ; i<8 ; i++){
        cout << "Digite o " << i << "o. numero: ";
        cin >> A[i];
    }

    cout << "\n\n Matriz B: \n\n";

    for (i=0 ; i<7 ; i++){
        B[i] = A[i]*3;
        cout << "A["<<i<<"]" << " = " << A[i] << "  |  " << "B["<<i<<"] = " << B[i] << "\n";
    }

    return 0;
}