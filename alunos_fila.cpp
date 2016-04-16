#include <bits/stdc++.h>

using namespace std;

int alunos_cpy[1000];

int main(){
	int i, n, n_alunos, continuaram;
	int aux;
	cin >> n;
	while(n--){
		vector<int> alunos;
		continuaram = 0;
		cin >> n_alunos;
		for(i=0; i < n_alunos; i++){
			cin >> aux;
			alunos.push_back(aux);
			alunos_cpy[i] = aux; 
		}
		sort(alunos.rbegin(), alunos.rend());
		for(i=0; i < n_alunos; i++){
			if(alunos_cpy[i]== alunos[i]){continuaram++;}
		}
		cout << continuaram << endl;
	}
	return 0;
}
