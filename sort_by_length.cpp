#include <bits/stdc++.h>

using namespace std;


bool compara(string a, string b){
	if(a.size() > b.size()){return true;}
	return false;	
}

int main(){
	int n, i;
	string a, b;
	 
	cin >> n;
	getchar();
	while(n--){
		vector<string> temp;
		stringstream string_s;
		getline(cin, a);
		string_s << a;
		while(string_s >> b){
			temp.push_back(b);
		}
		stable_sort(temp.begin(), temp.end(), compara);
		i =0;
		for(string a : temp){
			if(i == 0){cout << a; i++;continue;}
			cout<< " "<< a ;		
		}

		cout << endl;
	}
	return 0;
}
