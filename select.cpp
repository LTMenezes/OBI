#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> array;
int main() {
    array entrada;
    int i, j, atual, menor, aux, cursor;
    for(i=0;i<5;i++){
        cin>>aux;
        entrada.push_back(aux);
    }

    for(i=0; i<=5;i++){
        atual = entrada[i];
        menor = entrada[i];
        cursor = i;
        for(j=i;j<=5;j++){
            if(menor > entrada[j]){menor = entrada[j];cursor = j;}
        }
        aux = atual;
        entrada[i]= menor;
        entrada[cursor] = aux;
    }
    for(i=0;i<5;i++){cout << entrada[i];}
    return 0;
}

