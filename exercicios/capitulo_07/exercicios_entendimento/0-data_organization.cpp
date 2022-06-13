// Capitulo 7.2 - Classificacao de elementos | pagina 147
// data: 13/06/2022
/*
    O algoritmo a seguir tem a finalidade de ordenar 20 nomes em uma matriz de uma dimensao do tipo vetor.
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main (){
	string name[20], x;
	int i, j;
	
	//entrada de dados
	for (i=0 ; i<20 ; i++){
		cin >> name[i];
	}
	
	//processamento da ordenacao
	for (i=0 ; i<19 ; i++){
		for (j=i+1 ; j<20 ; j++){
			if (name[i] > name[j]){
				x = name[i];           //variavel simples de apoio
				name[i] = name[j];
				name[j] = x;
			}
		}
	}
	
	//saida dos dados
	cout << "\n\n\n";
	for (i=0 ; i<20 ; i++){
		cout << i << ": " << name[i] << "\n";
	}
	
	
	return 0;
}