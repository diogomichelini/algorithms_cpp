// Capitulo 7.3.2 - Pesquisa Binaria | pagina 160
// data: 13/06/2022
/*
    O algoritmo indicado a seguir descreve a entrada de dez nomes e a apresentação de nomes que podem ser solicitados na fase de pesquisa binaria.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	string name[10], s, x;
	int i, j, beg, mid, end;
	char a;  //answer
	bool find;
	
	//------- ENTRADA
	for (i=0 ; i<10 ; i++){
		cin >> name[i];
	}
	system("cls");
	cout << "Insira o nome a ser pesquisado: ";
	cin >> s;
	
	//------- ORDENACAO DOS DADOS
	for (i=0 ; i<10 ; i++){
		for (j=i+1 ; j<10 ; j++){
			if (name[i] > name[j]){
				x = name[i];         //variavel de apoio
				name[i] = name[j];
				name[j] = x;
			}
		}
	}
	
	//------- PESQUISA BINARIA + SAIDA DOS DADOS
	a = 's';
	
	while (a=='s'){
		cout << "Insira o nome a ser pesquisado: ";
		cin >> s;
		
		beg=1;
		end=10;
		find=0;
		
		while ((beg <= end) && (find==0)){
			mid = (beg + end)/2;
			
			if (s==name[mid]){
				find = 1;
			} else if (s < name[mid]){
				end = mid - 1;
			} else{
				beg = mid + 1;
			}
			
			if (find==1){
				cout << s << " na posicao " << mid;
			} else{
				cout << s << " nao localizado.";
			}
			
			cout << "Deseja continuar? [s/n]";
			cin >> a;
		}
	}
	
	
	return 0;
}