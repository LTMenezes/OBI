#include <bits/stdc++.h>
using namespace std;
//https://ideone.com/D8HvD5
int swaps;
string nomes[2]={"Marcelo", "Carlos"};
typedef vector<long int> vi;

typedef std::vector<long int>::iterator vec_it;
void merge(vec_it left, vec_it left_end, vec_it right, vec_it right_end, vec_it numbers)
{
    while (left != left_end) {
        if (*left < *right || right == right_end) {
            *numbers = *left;
            ++left;
        } else {
            *numbers = *right;
            ++right;
            swaps +=left_end - left;
        }

        ++numbers;
    }

    while (right != right_end) {
        *numbers = *right;
        ++right;
        ++numbers;
    }
}

void merge_sort(vi& numbers)
{
    if (numbers.size() <= 1) {
        return;
    }

    vi::size_type middle = numbers.size() / 2;
    vi left(numbers.begin(), numbers.begin() + middle);
    vi right(numbers.begin() + middle, numbers.end());

    merge_sort(left);
    merge_sort(right);

    merge(left.begin(), left.end(), right.begin(), right.end(), numbers.begin());
}

int main() {
    long int num,one, temp,i;
    one =1;
    while(scanf("%lu", &num) != EOF){
        //cout<< "NUM" << num << endl;
        if(num == 0){break;}
        //if(one==0){cout<<endl;}
        //one = 0;
        vi a;
        for (i = 0; i < num; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        swaps = 0;
        // Start merge sort
        merge_sort(a);
        //cout<<"PASSA AQUI"<<endl;
        if(swaps % 2 == 0){cout << nomes[1]<<endl;}
        else{cout << nomes[0]<<endl;}
    }
    return 0;
}
