#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1252
using namespace std;

int input[10000];
int input_m[10000];

int bubble_sort(int size);

int main(){
    int total, modulo, i, temp;
    while(1){
        cin >> total;
        cin >> modulo;
        cout<< total << " "<< modulo;
        if(total == 0 && modulo == 0){break;}
        for(i=0;i<total; i++){
                cin >> input[i];
                input_m[i] = input[i] % modulo;
        }
        bubble_sort(total-1);
        for(i=0;i<total; i++){
            cout << input[i] << " "<<endl;
        }
    }
    return 0;
}

int bubble_sort(int size){
    int cursor,j,i,aux;
    for(j=0;j<size;j++){
        for(i=0;i<size;i++){
            cursor = i + 1;
            if(input_m[cursor]<input_m[i]){
                aux = input_m[i];
                input_m[i] = input_m[cursor];
                input_m[cursor]=aux;

                aux = input[i];
                input[i] = input[cursor];
                input[cursor]=aux;
            }
            if(input_m[cursor] == input_m[i]){
                if(input[cursor]%2 == 1 && input[i]%2 == 0){
                    aux = input_m[i];
                    input_m[i] = input_m[cursor];
                    input_m[cursor]=aux;

                    aux = input[i];
                    input[i] = input[cursor];
                    input[cursor]=aux;
                }
                if(input[cursor]%2 == 1 && input[i]%2 == 1){
                    if(input[cursor] > input[i]){
                        aux = input_m[i];
                        input_m[i] = input_m[cursor];
                        input_m[cursor]=aux;

                        aux = input[i];
                        input[i] = input[cursor];
                        input[cursor]=aux;
                    }
                }
                if(input[cursor]%2 == 0 && input[i]%2 == 0){
                    if(input[cursor] < input[i]){
                        aux = input_m[i];
                        input_m[i] = input_m[cursor];
                        input_m[cursor]=aux;

                        aux = input[i];
                        input[i] = input[cursor];
                        input[cursor]=aux;
                    }
                }
            }
        }
    }
}
