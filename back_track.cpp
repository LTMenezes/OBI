#include <bits/stdc++.h>

using namespace std;
int input[100]={0};
int cursores[12];

void back(int k, int len,int stop);

int main(){
    int total, n,i;
        cin >> n;
        for(i=0;i<n; i++){
            cin >> input[i];
        }
        back(0,n,0);
}

void back(int k, int len,int stop){
    int i,a,temp;
    if (k == len) {
        i= 0;
        while((a = input[i])!=0){cout<< a<<" ";i++;}
    }
    cout<<endl;
    stop++;
    if(stop > 6){return;}

    for (i = k; i < len; i++) {
         temp = input[i];
         input[i]= input[k];
         input[k] = temp;
         back(k+1,len, stop);
         temp = input[i];
         input[i]= input[k];
         input[k] = temp;
    }
}
