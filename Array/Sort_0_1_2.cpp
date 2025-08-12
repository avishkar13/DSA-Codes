#include<iostream>
using namespace std;

void SortArray(int arr[], int n){
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(arr[mid]== 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]== 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }

    }

}

int main(){

    int arr[10] ={ 2,0,1,2,0,2,0,1,1,2};

    SortArray(arr,10);

     for(int k = 0; k < 10; k++ ){
            cout<< arr[k]<< " ";
        }

    return 0;
}