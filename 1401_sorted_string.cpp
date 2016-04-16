        #include <bits/stdc++.h>
     
        using namespace std;
     
        char strings[11];
     
        int main(){
        	int i, n, j;
        	char first[11];
        	cin >> n;
        	for(i=0;i < n; i++){
        		cin >> strings;
        		for(j=0; j < 11; j++){if(strings[j] == 0){break;}}
        		sort(strings, strings+ j);
        		strcpy(first, strings);
        		while(1){
        			cout << strings << endl;
        			next_permutation(strings, strings + j);
        			if(strcmp(first, strings)==0){break;}
        		}
        	}
        }
