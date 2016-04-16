#include <iostream>
#include <vector>
#include <stdio.h>

#define size 5

using namespace std;

int array[size];
int aux[size];

int merge_sort(int inicio, int fim);
int merge(int inicio, int meio, int fim);

int main(){
	int i;
	for(i=0;i < size; i++){cin >> array[i];}
	merge_sort(0, (size-1));
	for(i=0;i < size; i++){cout << array[i];}
	return 0;
}

int merge_sort(int inicio, int fim){
	int i;
	if(inicio >=fim ){return 0;}
	int meio;
	meio = (inicio + fim)/ 2;
	merge_sort(inicio, meio);
	merge_sort((meio+1), fim);
	merge(inicio, meio, fim);

	for(i= inicio; i <= fim; i++){array[i]= aux[i];}
	return 0;
}

int merge(int inicio, int meio, int fim){
	int i, j;
	i = inicio;
	j= meio + 1; 
	int k =0;
	printf("chegou %d %d \n", inicio, fim);
	while((i <= meio)&&(j <= fim)){
		if(array[i] < array[j]){aux[inicio] = array[i]; i++; inicio++;}
		if(array[i] >= array[j]){aux[inicio] = array[j]; j++; inicio++;}
	}
	while((i <= meio)){
		aux[inicio++] = array[i++];
	}
	while(j <= fim){
		aux[fim++] = array[j++];
	}
	return 0;
}