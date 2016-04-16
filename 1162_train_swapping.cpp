#include <bits/stdc++.h>

using namespace std;

int trains[50];

int bubblesort(int total);

int main(){
    int cases, total, i, j, swaps;
    cin >> cases;
    for(i=0; i < cases; i++){
        cin >> total;
        for(j = 0; j < total; j++){
            cin >> trains[j];
        }
        swaps = bubblesort(total);
        cout << "Optimal train swapping takes " << swaps << " swaps."<< endl;
    }
    return 0;
}

int bubblesort(int total){
    int i, j, swaps;
    swaps = 0; //variables used for for loops.
    int temporaryCharHolder; //used to swap values of two array entries
    for (i = 0; i < total; i++) {
        for (j = 0; j < total - 1; j++) {
          if (trains[j] > trains[j + 1]) {
            swaps++;
            temporaryCharHolder = trains[j];
            trains[j] = trains[j + 1];
            trains[j + 1] = temporaryCharHolder;
            }
        }
    }
    return swaps;
}
