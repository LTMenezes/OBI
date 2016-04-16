#include <stdio.h>

int main (){
    int hi, mi, si, hf, mf, sf, aux1, aux2, aux3, falta_s, falta_m;
    printf("Insira a hora inicial : ");
    scanf("%d %d %d", &hi, &mi, &si);
    printf("Insira a hora final : ");
    scanf("%d %d %d", &hf, &mf, &sf);
    aux1 = sf - si;
    aux2 = mf - mi;
    aux3 = hf - hi;
    if(aux1 < 0){
            falta_s = abs(aux1);
            //se minuto tiver 0
            if(aux2 < 0){
                falta_m = falta_m + abs(aux2);
                if(aux3 < 1){printf("Horario inicial depois do horario final. \n"); }
                else{aux2 = aux2 + 59; aux3 = aux3 - 1; aux1 = aux1 + 60;}
            }
            else if(aux2 == 0){
                if(aux3 < 1){printf("Horario inicial depois do horario final. \n"); }
                else{aux3 = aux3 - 1; aux1 = aux1 + 60;}
            }
            else if(aux2 > 0) {aux2 = aux2 - 1; aux1 = aux1 + 60;}
    }
    else if(aux2 < 0){
        falta_m = abs(aux2);
        if(aux3 < 1){printf("Horario inicial depois do horario final. \n");return 0; }
        else{aux2 = aux2 + 60; aux3 = aux3 - 1;}
    }
    else if(aux3 < 0){printf("Horario inicial depois do horario final. \n");return 0;}
    printf("Tempo Percorrido: %d h/ %d m / %d s", aux3, aux2, aux1);
    return 0;
}
