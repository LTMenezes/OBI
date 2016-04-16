#include <bits/stdc++.h>

using namespace std;

int input[13];
int output[13];

int back(int soma, int alvo, int cursor, int size);

int main(){
    int total_k, i, one;
    one = 0;
    while(1){
        cin >> total_k;
        if(total_k == 0){break;}
        if(one != 0){cout<<endl;}
        one++;
        for(i=0;i < total_k;i++){cin>> input[i];}
        back(0, 6, 0,total_k);
    }
    return 0;
}

int back(int soma, int alvo, int cursor, int size){
    int one = 0,i;
    if(soma == alvo){
        for(i=0;i < size;i++){if(output[i]!=0){
                one++;
                if(one == 1){cout << output[i];}
                else{cout << " " <<output[i];}
            }
        }
        cout << endl;
        return 0;
    }
    if(soma > alvo){return 0;}
    if(cursor >= size){return 0;}

    output[cursor] = input[cursor];
    back(soma+1, alvo, cursor+1,size);
    output[cursor] = 0;
    back(soma, alvo, cursor+1,size);
    return 0;
}
