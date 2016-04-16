#include <bits/stdc++.h>
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=565
using namespace std;
typedef vector<int> vi;
int output[30];
int input[30];
int safe[21];
int maxo;
int back(int pos, int alvo, int total,int used,int sizeo);

int main(){
    int total, time,i, temp;
    while(scanf("%d", &time) != EOF){
        cin >> total;
        for(i=0; i < total; i++){
            cin >> input[i];
        }
        maxo = 0;
        back(0,time,0,0,total);
        for(i=0; i < total; i++){
            if(safe[i] != 0){
            cout << safe[i] << " ";
            }
        }
        cout << "sum:" << maxo;
        cout<<endl;
    }
    return 0;
}

int back(int pos, int alvo, int total,int used, int sizeo){
    if(total > alvo){return 0;}
    if(total == alvo){
            int i;
        maxo = total;
        for(i= 0; i < used; i++){
            safe[i] = output[i];
        }
        return 0;
    }
    if(maxo == alvo){return 0;}
    if(total > maxo){
        int i;
        maxo = total;
        for(i= 0; i < used; i++){
            safe[i] = output[i];
        }
    }

    if(used >= sizeo){return 0;}
    output[pos] = input[used];
    back(pos+1, alvo, total + output[pos], used + 1, sizeo);
    output[pos] = 0;
    back(pos, alvo, total, used + 1,sizeo);
}
