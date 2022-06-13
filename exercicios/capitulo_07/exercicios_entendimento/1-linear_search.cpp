// Capitulo 7.3.1 - Pesquisa Sequencial | pagina 157
// data: 13/06/2022
/*
    O algoritmo indicado a seguir descreve a entrada de dez nomes e a apresentação de nomes que podem ser solicitados na fase de pesquisa sequencial
*/

#include <iostream>
#include <stdlib.h>   //biblioteca para limpar a tela
using namespace std;

int main (){
	string name[10], s; //s==search |
	int i;
	bool find;
	
	// -------- ENTRADA
	for (i=0 ; i<10 ; i++){
		cin >> name[i];
	}
	system("cls");
	cout << "Insira o nome a ser pesquisado: ";
	cin >> s;
	
	// ------- PROCESSAMENTO
	i = 0;
	find = false;
	
	while ((i<10) && (find==0)){
		if (s==name[i]){
			find=1;
			break;
		} else{
			i++;
		}
	}
	
	// ------- SAIDA
	if (find==1){
		cout << s << " localizado na posicao " << i;
	} else{
		cout << "nao localizado";
	}
	
	return 0;
}