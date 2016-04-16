#include <bits/stdc++.h>
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=515
using namespace std;

typedef vector<int> vi;

int input[1000]={0};
int output[1000]={0};
int last_out[1000]={0};
int ve_se_tem;

int search(int size, int soma, int alvo, int cursor);
void copy_output(int size);
int check_output(int size);

int main(){
    int i, alvo, n;

    while(1){
        cin >> alvo;
        cin >> n;
        if(alvo == 0 && n == 0){break;}
        for(i=0; i < n; i++){
            cin >> input[i];
        }
        vi saida;
        vi saida_l;
        ve_se_tem = 0;
        search(n, 0, alvo, 0);
        if(ve_se_tem == 0){cout<<"Sums of " <<alvo<<":"<<endl<<"NONE"<<endl;}
    }
    return 0;
}

int check_output(int size){
    int a[1000]={0}, b[1000]={0};

    for(int i = 0; i < size; i++){
        a[output[i]]++;
    }
    for(int i = 0; i < size; i++){
        b[last_out[i]]++;
    }
    for(int i = 1; i < 1000; i++){
        if(a[i] != b[i]){return 0;}
    }
    return 1;
}

void copy_output(int size){
    for(int i = 0; i < size; i++){
        last_out[i] = output[i];
    }
}
int search(int size, int soma, int alvo, int cursor){
    int i, check, one;
    if(soma == alvo){
        one = 0;
        check = check_output(size);
        if(check == 1){return 0;}
        for(i=0;i < size;i++){if(output[i]!=0){
                one++;
                if(ve_se_tem == 0){cout<<"Sums of " <<alvo<<":"<<endl;ve_se_tem++;}
                if(one == 1){cout << output[i];}
                else{cout << "+" <<output[i];}
            }
        }
        cout<<endl;
        copy_output(size);
        return 0;
    }
    if(cursor >= size){return 0;}
    if(soma > alvo){return 0;}
    output[cursor] = input[cursor];
    search(size, soma + input[cursor], alvo, cursor+1);
    output[cursor] = 0;
    search(size, soma,alvo, cursor+1);
    return 0;
}

