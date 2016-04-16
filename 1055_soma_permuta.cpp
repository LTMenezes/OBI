#include <bits/stdc++.h>

using namespace std;

int soma;
int input[100];
int maior[100];
int menor[100];

int maxo(int tam);
int checa(int tam);
int stop;

int main(){
    int i, casos, j, tam;
    scanf("%d", &casos);
    for(i=1;i <= casos; i++){
        scanf("%d", &tam);
        for(j=0; j <tam; j++){cin >> input[j];}
        soma = 0;
        stop = 0;
        maxo(tam);
        cout<<"Case "<<i<<": "<<soma<<endl;
    }
    return 0;
}

int maxo(int tam){
    int i, size_maior,size_menor, ptr1, ptr2, change, conta, last, temp;
    double media;
    media = 0;
    for(i=0; i < tam; i++){
        media += input[i];
    }
    media =  media / tam;
    ptr1=0;
    ptr2=0;
    for(i=0; i < tam; i++){
        if(input[i] > media){maior[ptr1] = input[i]; ptr1++;}
        else{menor[ptr2] = input[i]; ptr2++;}
    }
    size_maior = ptr1;
    size_menor = ptr2;
    sort(maior, maior + size_maior+1);
    sort(menor, menor+ size_menor+1);
    i=0;
    ptr1=1;
    ptr2 = 1;
    change = 1;
    while(ptr1<= size_maior && ptr2 <=size_menor){
        if(change == 1){input[i] =maior[ptr1]; ptr1++;change = 0;}
        else{input[i] =menor[ptr2]; ptr2++;change = 1;}
        i++;
    }
    while(ptr1 <= size_maior){
        input[i] = maior[ptr1];
        ptr1++;
        i++;
    }
    while(ptr2 <= size_menor){
        input[i] = menor[ptr2];
        ptr2++;
        i++;
    }
    conta = 0;
    last= input[0];
    for(i=0; i < tam; i++){
        temp= abs(last - input[i]);
        conta += temp;
        last = input[i];
    }
    if(soma < conta) {soma = conta;}
    if(soma == 10){return 0;}
}
