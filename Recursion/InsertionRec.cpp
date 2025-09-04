#include<iostream>
using namespace std;

void Insertion(int arr[], int n) {
    // base case
    if (n <= 1) return;

    // Recursively sort first n-1 elements
    Insertion(arr, n - 1);

    // Insert last element at its correct position in sorted array
    int last = arr [n - 1];
    int j = n - 2;
    while( j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main(){
    int arr[6] = {20,10,50,30,80,40};

    Insertion(arr,6);

    //Print Array
    cout<< "Sorted Array: " << endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}