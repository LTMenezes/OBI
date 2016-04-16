#include <iostream>
#include <vector>
#include <stdio.h>

long int a[1000000];
using namespace std;

void merge(long int *arr, long int size1, long int size2, long int *inversions) {
    int temp[size1+size2];
    int ptr1=0, ptr2=0;

    while (ptr1+ptr2 < size1+size2) {
        if (ptr1 < size1 && arr[ptr1] <= arr[size1+ptr2] || ptr1 < size1 && ptr2 >= size2)
            temp[ptr1+ptr2] = arr[ptr1++];

        if (ptr2 < size2 && arr[size1+ptr2] < arr[ptr1] || ptr2 < size2 && ptr1 >= size1) {
            temp[ptr1+ptr2] = arr[size1+ptr2++];
            *inversions += size1-ptr1;
        }
    }

    for (int i=0; i < size1+size2; i++)
        arr[i] = temp[i];
}

void mergeSort(long int *arr, long int size, long int* inversions) {
    if (size == 1)
        return;

    int size1 = size/2, size2 = size-size1;
    mergeSort(arr, size1, inversions);
    mergeSort(arr+size1, size2, inversions);
    merge(arr, size1, size2, inversions);
}
int main(int argc, char** argv) {
    long int num;
    while(scanf("%ld", &num) != EOF){
        long int swaps = 0;
        for (long int i = 0; i < num; i++) {
            cin >> a[i];
        }

        // Start merge sort
        mergeSort(a, num, &swaps);

        cout<<swaps<< endl;
    }
    return 0;
}
