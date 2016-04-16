#include <stdio.h>
#include <string.h>
char strings[32][100];

int main(){
    int max, sorteado, i,j;
    scanf("%d %d", &max, &sorteado);
    for(i=0; i < max; i++){
        scanf("%s", &strings[i]);
    }
    char temp[32];
    for(i=0; i < max -1; i++){
        for(j=i; j < max - i -1; j++){
            if(compara(j, j + 1) > 0){
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], temp);
            }
        }
    }
    printf("%s", strings[sorteado]);
    return 0;
}


int compara(int a, int j){
    int aux=0, i;
    for(i=0; i < 32; i++){
        if(strings[a][i] > strings[j][i]){aux = 1; break;}
        if(strings[a][i] < strings[j][i]){aux = -1; break;}
    }
    return aux;
}
