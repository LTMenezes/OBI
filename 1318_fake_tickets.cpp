#include <bits/stdc++.h>

using namespace std;


int main(){
    int tickets, attendes, i, fake, aux, first;
    first =1;
    while(1){
        fake = 0;
        int ogtickets[10000]={0};
        cin >> tickets >> attendes;
        if((tickets==0)&&(attendes==0)){break;}
        for(i = 0; i < attendes; i++){
            cin >> aux;
            if(ogtickets[aux] == 1){fake++;}
            ogtickets[aux]++;
        }
        cout << fake << endl;
        first++;
    }
    return 0;
}
