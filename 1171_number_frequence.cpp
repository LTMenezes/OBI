#include <bits/stdc++.h>

using namespace std;

int main(){
    int aux, total , i;
    vector<int> input;
    cin >> total;
    for(i=0; i < total; i++){
        cin >> aux;
        input.push_back(aux);
    }
    sort(input.begin(), input.end());
    aux = input[0];
    total = 0;
    for(int i : input){
        if((i != aux)){cout << aux <<" aparece "<< total << " vez(es)"<< endl; aux = i; total =1;}
        else{total++;}
    }
    cout << aux <<" aparece "<< total << " vez(es)"<< endl;
}
