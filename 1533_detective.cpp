#include <bits/stdc++.h>

using namespace std;


int main(){
    int total, i, aux;
    while(1){
        cin >> total;
        if(total == 0){break;}
        vector<int> suspects;
        vector<int> suspectscpy;
        for(i = 0; i < total; i++){
            cin >> aux;
            suspects.push_back(aux);
            suspectscpy.push_back(aux);
        }
        sort(suspects.rbegin(), suspects.rend());
        int i = 0;
        for(int a : suspectscpy){
            i++;
            if(suspects[1] == a){cout << i <<endl;}
        }
    }
}
