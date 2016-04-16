#include <bits/stdc++.h>

using namespace std;

int back(int used, int cursor);
int checa();

int tryo[11];
int stop;
double alvo;
long double a;
long double b;
int b_cpy;

int hasDupes () {

    int i, used[10];

    if (b_cpy > 9999999999)
        return 1;


    for (i = 0; i < 10; i++)
        used[i] = 0;

    while (b_cpy != 0) {

        if (used[b_cpy%10])
            return 1;


        used[b_cpy%10] = 1;
        b_cpy /= 10;
    }


    return 0;
}

int main(){
    int one;
    one = 0;
    while(scanf("%lf", &alvo) != EOF){
        if(alvo == 0){break;}
        if(one > 0){cout<<endl;}
        one++;
        stop = 0;
        back(0,0);
        if(stop == 0){cout << "There are no solutions for "<< alvo<<"."<<endl;continue;}
    }
}

int back(int used, int cursor){
    int up, i, j, cursor_dentro;
    if(used == 5){checa();return 0;}
    if(cursor >= 10){return 0;}
        for(i = 0; i <= 9; i++){
            up = 0;
            for(j=0; j < cursor; j++){if(tryo[j]==i){up = 1;continue;}}
            if(up == 1){continue;}
            tryo[cursor] = i;
            back(used+ 1, cursor+1);
        }
    return 0;
}


int checa(){
    int j, mult, check,i;
    double c;
    int temp1, one = 0;
    a = 0;
    b = 0;
    mult = 1;
    for(j=4; j >= 0; j--){
        a += tryo[j] * mult;
        mult = mult * 10;
    }
    b = a / alvo;
    c = b *1000;
    temp1 = c;
    temp1 = temp1 %1000;
    if(temp1 != 0){
        return 0;
    }
    mult = 100000;
    check = b;
    if(check / 1000 == 0){return 0;}
    for(j=4; j >= 0; j--){
        mult = mult /10;
        if(check / mult == 0){one++;}
        for(i=4; i >= 0; i--){
            if(check / mult == tryo[i]){return 0;}
            //cout<< check/ mult <<" "<< tryo[j]<<endl;
        }
        check = check %mult;
    }
    b_cpy = b;
    if(one >= 2){if(b_cpy/10000 == 0){return 0;}}
    if(hasDupes()==1){return 0;}
    b_cpy = b;
    if(b_cpy / 10000 < 1){cout<< a << " / 0"<<b<<" = "<< alvo<<endl;stop =1;}
    else{cout<< a << " / "<<b<<" = "<< alvo<<endl;stop =1;}
    return 0;
}
