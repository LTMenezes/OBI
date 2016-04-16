#include <stdio.h>
int main(){
    int array[5], i,j, cursor, aux;
    for(i=0;i<5;i++){scanf("%d", &array[i]);}
    for(j=0;j<4;j++){
        for(i=0;i<5;i++){
            cursor = i + 1;
            if(array[cursor]<array[i]){
                aux = array[i];
                array[i] = array[cursor];
                array[cursor]=aux;
            }
        }
    }
    for(i=0;i<5;i++){printf("%d",array[i]);}
    return 0;
}
