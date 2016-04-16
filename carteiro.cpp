#include <iostream>
#include <vector>
#include <stdio.h>
#define K 100000
using namespace std;

int casas[K];
int encomendas[K];

int busca_bin(int wanted, int fim);

int main(){
	int n_casas, m_encomendas, i, wanted, atual, dif, total, result;
	cin >> n_casas >> m_encomendas;
	for(i=0; i < n_casas; i++)	cin >> casas[i];
	for(i=0; i < m_encomendas; i++)	cin >> encomendas[i];
	atual = 0;
	total = 0;
	for(i=0; i < m_encomendas; i++){
		wanted = encomendas[i];
		result = busca_bin(wanted, (n_casas -1));
		dif = result - atual;
		atual = result;
		if(dif < 0){ dif = dif * -1;}
		total = total + dif;
	}
	cout << total; 
	return 0;
}

int busca_bin(int wanted, int fim){
	int inicio, i, meio;
	inicio = 0;
	while(inicio <= fim){
		meio = (fim+inicio)/2;
		if(casas[meio] == wanted){return meio;}
		if(casas[meio] > wanted){fim = meio - 1;}
		if(casas[meio] < wanted){inicio = meio + 1;}
	}
	return -1;
}
