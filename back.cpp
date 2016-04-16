#include <bits/stdc++.h>

using namespace std;

int prossodia[3];
int cards[3][21];
int n_cards;
bool result = false;
int search(int size, int atk, int def, int skl, int one);

int main(){
    int i;
    cin >> n_cards;
    cin >> prossodia[0] >> prossodia[1] >> prossodia[2];
    for(i=0; i < n_cards; i++){
        cin >> cards[0][i] >> cards[1][i]>> cards[2][i];
    }
    search(0, 0, 0, 0, 0);
    if(result==true)cout << "Y"<<endl;
    if(result==false)cout << "N"<<endl;
    return 0;
}

int search(int size, int atk, int def, int skill, int one){
    if((atk == prossodia[0])&&(def == prossodia[1])&&(skill == prossodia[2])&&(one > 1)){result = true;}
    if(size == n_cards) return 0;

    search(size +1, atk+cards[0][size],def+cards[1][size],skill+cards[2][size], one+1);
    search(size +1, atk, def, skill, one);
    return 0;
}
