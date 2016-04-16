#include <bits/stdc++.h>

using namespace std;
typedef map<string, int> mm;
mm out;
string input;
string aux;
int main(){
    while(cin >> input){
        //gera();
        vector<string> temp;
        mm::iterator it = out.begin();
        while(it != out.end()){
            if(it->second == 1){
                temp.push_back(it->first);
            }
            it++;
        }
        for(string a: temp){
            cout << a << endl;
        }
    }
}

int gera(int loop_number){
    int i, temp;
    aux = input;
    for(i = 0; i < input.size(); i++){

    }
}
