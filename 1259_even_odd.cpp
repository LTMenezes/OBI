#include <bits/stdc++.h>

using namespace std;

vector<int> odd;
vector<int> even;

int main(){
    int aux, i, size;
    scanf("%d", &size);
    for(i =0 ; i < size; i++){
        scanf("%d", &aux);
        if((aux%2) == 0){even.push_back(aux);continue;}
        odd.push_back(aux);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.begin(), even.end());
    for(int a: even){
        cout << a << endl;
    }
    for(int a: odd){
        cout << a << endl;
    }
    return 0;
}
