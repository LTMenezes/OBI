#include <bits/stdc++.h>

using namespace std;

char input[1001];
int formadas[1001];
char output[1001];
typedef vector<string> vi;

bool compara(string a, string b){
    int sizea, sizeb, sizem;
    sizea = a.size();
    sizeb = b.size();
    if(sizeb< sizea){sizem = sizeb;}
    else{sizem = sizeb;}

    for(int i =0; i < sizem; i++){
        if(a[i] < b[i]){return true;}
        if(a[i] > b[i]){return false;}
    }
    if(sizeb > sizea){return true;}
    else{return false;}
}
int back(int pos, int last_i, int sa, vi& ro){
    int skip;
    if(pos > sa){return 0;}
    if(last_i >= sa ){return 0;}
    for(int i = last_i; i < sa ; i++){
        for(int j=last_i; j < i; j++){
            if(input[j] == input[i]){skip=1;break;}
        }
        if(skip == 1){skip = 0;continue;}
        output[pos] = input[i];
        //retorna a ordem original
        ro.push_back(output);
        back(pos+1,i+1,sa,ro);
        output[pos] = 0;
    }
}

int main(){
    while(scanf("%s", input) != EOF){
    vi ro;
    int size_array=strlen(input);
    sort(input, input + size_array);
    back(0,0,size_array, ro);
    sort(ro.begin(), ro.end(), compara);
    for(string a : ro){
        cout << a<< endl;
    }
    cout<<endl;
    }
}
