//Selection Sort
#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i< size-1; i++){
        int minIndex = i;

        for(int j = i+1; j< size; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){

    int arr[10] = {20,56,28,10,36,85,41,26,23,2};
    selectionSort(arr,10);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}