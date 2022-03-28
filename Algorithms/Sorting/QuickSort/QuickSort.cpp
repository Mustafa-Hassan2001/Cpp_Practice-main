#include <bits/stdc++.h>

using namespace std;

void swap(int &A, int &B){
    A = A+B;
    B = A-B;
    A = A-B;
}

int Partition(int A[], int start, int end){
    
    int pivot = A[end];
    int partitionIndex = start;
    for(int i=start; i<end; i++){
        if(A[i] <= pivot){
            swap(A[i],A[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(A[partitionIndex],A[end]);
    return partitionIndex;
}

int QuickSort(int A[], int start, int end){
    
    if(start<end){
        
        int partitionIndex = Partition(A,start,end);
        QuickSort(A,start,partitionIndex-1);
        QuickSort(A,partitionIndex+1,end);
    }
    return 0;
}

int main() {
    int A[] = {5,2,3,1,4};
    QuickSort(A,0,4);
    for(int i=0; i<5; i++) cout<<A[i]<<" ";
}