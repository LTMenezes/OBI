#include <bits/stdc++.h>

using namespace std;

double positions_x[100];
double positions_y[100];
double gnu_real[100][2];

int search(int x, int y, int size);

int main(){
    int cases, gnus, i, max_alligned, atual, j,h, aux, boole;
    double x, y;
    max_alligned = 0;
    cin >> cases;
    for(h=1; h <= cases; h++){
        max_alligned = 0;
        cin >> gnus;
        aux = gnus;
        for(i=0;i<gnus;i++){
            boole = 0;
            cin >> x;
            cin >> y;
            positions_x[i] = x;
            positions_y[i] = y;

            for(j=0; j < i; j++){
                if((positions_x[j] == positions_x[i])&&(positions_y[j] == positions_y[i])){
                    positions_x[i] = 666.66;
                    positions_y[i] = 666.66;
                    if(boole == 0){aux= aux - 1;boole = 1;}
                    boole = 1;
                }
            }
            gnu_real[i][0]= x;
            gnu_real[i][1]= y;
        }
        for(i=0;i<gnus;i++){
            atual = search(gnu_real[i][0], gnu_real[i][1], gnus);
            atual = atual;
            if(max_alligned < atual){max_alligned = atual;}
        }
        if(max_alligned == 1){cout << "Data set #" <<h<<" contains a single gnu."; printf("\n"); continue;}
        cout << "Data set #" <<h<<" contains "<<aux<<" gnus, out of which a maximum of "<<max_alligned<<" are aligned.";
        printf("\n");
    }
    return 0;
}

int search(int x, int y, int size){
    int i, horizontal, vertical;
    horizontal = 0;
    vertical = 0;
    for(i = 0; i < size; i++){
        if(positions_x[i] == x){horizontal++;}
    }
    for(i = 0; i < size; i++){
        if(positions_y[i] == y){vertical++;}
    }
    if(horizontal > vertical){return horizontal;}
    return vertical;
}

