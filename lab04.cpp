#include <iostream>

using namespace std;

void MaxHeapify(int * A,int i, int n){
    
    int largest= n; //initialize the largest as root 
    int l = (2*n)+1;//Left(i)= 2i 
    int r = (2*n) + 2;
if(l < i && A[l] > A[largest]){
    largest = l;
}
    //else{
     //largest = i; 
    //}
if(r < i && A[r] > A[largest]){
    largest = r; 
}
if(largest != n){
    swap(A[n], A[largest]);
    MaxHeapify(A, i, largest); //print out the array and index but not the heapsize? 
}
}
void BuildMaxHeap(int *A, int i){
    int n = 0;
   for(n = (i/2); n>=0; n--){
       MaxHeapify(A,i,n);//reverse level order traversal.from last non-leaf node and heapify each node 
    }
}//anything less than our current child will be swapped 

void HeapSort(int *A, int i){
     BuildMaxHeap(A,i);
    for(int j = i -1; j >= 0; j--){
        swap(A[0], A[j]);
       // n = n-1;
        MaxHeapify(A,j, 0);
    }
    
}

int main(int argc, char **argv){
    int length = 0; 
    cin>>length; 

    int A[length];

    for(int i = 0; i <length; i++){
        cin>>A[i];
    }
    int k = sizeof(A)/sizeof(A[0]);

    HeapSort(A,k);
    for(int j = 0; j < length; j++){
        cout<<A[j]<<";";
    }
}
