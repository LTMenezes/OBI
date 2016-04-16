#include <stdio.h>

int main() {
    int array[5], i, j, atual, menor, aux, cursor;
    for(i=0;i<5;i++){
        scanf("%d", &array[i]);
    }

    for(i=0; i<=5;i++){
        atual = array[i];
        menor = array[i];
        cursor = i;
        for(j=i;j<=5;j++){
            if(menor > array[j]){menor = array[j];cursor = j;}
        }
        aux = atual;
        array[i]= menor;
        array[cursor] = aux;
    }
    for(i=0;i<5;i++){printf("%d",array[i]);}
    return 0;
}

