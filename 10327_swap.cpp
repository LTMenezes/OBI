#include <bits/stdc++.h>

using namespace std;

int vetor[1000];

int bubblesort(int total);

int main(){
    int i, swaps, total;
    while(scanf("%d", &total) != EOF){
        for(i=0;i<total;i++){
            cin >> vetor[i];
        }
        swaps = bubblesort(total);
        cout <<"Minimum exchange operations : "<< swaps << endl;
    }
}

int bubblesort(int total){
    int i, j, swaps;
    swaps = 0; //variables used for for loops.
    int temporaryCharHolder; //used to swap values of two array entries
    for (i = 0; i < total; i++) {
        for (j = 0; j < total - 1; j++) {
          if (vetor[j] > vetor[j + 1]) {
            swaps++;
            temporaryCharHolder = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = temporaryCharHolder;
            }
        }
    }
    return swaps;
}
