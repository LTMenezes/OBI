#include <bits/stdc++.h>
using namespace std;

int swaps;
string nomes[2]={"marcelo", "carlos"};

void merge(int *arr, int size1, int size2) {
    int temp[size1+size2];
    int ptr1=0, ptr2=0;

    while (ptr1+ptr2 < size1+size2) {
        if (ptr1 < size1 && arr[ptr1] <= arr[size1+ptr2] || ptr1 < size1 && ptr2 >= size2)
            temp[ptr1+ptr2] = arr[ptr1++];

        if (ptr2 < size2 && arr[size1+ptr2] < arr[ptr1] || ptr2 < size2 && ptr1 >= size1){
            temp[ptr1+ptr2] = arr[size1+ptr2++];
            swaps += size1-ptr1;
        }
    }

    for (int i=0; i < size1+size2; i++)
        arr[i] = temp[i];
}

void mergeSort(int *arr, int size) {
    if (size == 1)
        return;

    int size1 = size/2, size2 = size-size1;
    mergeSort(arr, size1);
    mergeSort(arr+size1, size2);
    merge(arr, size1, size2);
}

int main(int argc, char** argv) {
    int num;
    while(scanf("%d", &num) != EOF){
        if(num == 0){break;}
        int a[num];
        for (int i = 0; i < num; i++) {
            cin >> a[i];
        }
        swaps = 0;
        // Start merge sort
        mergeSort(a, num);

        if(swaps&2 == 0){cout << nomes[1]<<endl;}
        if(swaps&2 == 1){cout << nomes[0]<<endl;}
    }
    return 0;
}
