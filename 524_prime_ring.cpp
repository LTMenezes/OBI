#include <bits/stdc++.h>
//print in wrong sequence, wtf
using namespace std;

int back(int alvo, int pos, int used, int sizeo);

int primos[16]= {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
int output[32];
int outcpy[32];
int endo;

int back(int cursor, int n){
    int check, temp, printa,ant, prox, temp1;
    check = 0;
    printa = 0;

    if(cursor >= 2){
        temp = output[cursor-1] + output[cursor-2];
        for(int j = 0; j < 16; j++){
            if(temp == primos[j]){check++;}
        }
        if(check == 0){return 0;}
    }


    check = 0;
    for(int i = 0; i < n; i++){
        ant = i - 1;
        if(ant < 0){ant = n-1;}
        prox = i + 1;
        if(prox == n){prox = 0;}
        temp = output[i] + output[ant];
        temp1 = output[i] + output[prox];
        for(int j = 0; j < 16; j++){
            if(temp == primos[j]){check++;}
            if(temp1 == primos[j]){check++;}
        }
    }

    if(check == n * 2){
        temp = 0;
        for(int i = 0; i < n; i++){
               if(output[i] == outcpy[i]){printa++;}
        }
        if(printa != n){
            for(int i = 0; i < n; i++){
                   if(temp ==0){cout << output[i]; temp =1;}
                   else{cout <<" "<< output[i];}
                   outcpy[i] = output[i];
            }
            cout <<endl;
        }
    }

    for(int i = cursor; i <n; i++){
        temp = output[cursor];
        output[cursor] = output[i];
        output[i] = temp;
        back(cursor + 1, n);
        temp = output[cursor];
        output[cursor] = output[i];
        output[i] = temp;
    }
}

int main(){
    int n, cont, one;
    cont = 1;
    one = 0;
    while(scanf("%d", &n) !=EOF){
        if(one >0){cout << endl;}
        cout <<"Case "<<cont<<":"<<endl;
        cont++;
        for(int i = 0; i < n; i++){
            output[i] = i+1;
        }
        back(1, n);
        one++;
    }
    return 0;
}

