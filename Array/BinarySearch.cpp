#include<iostream>
using namespace std;

int BinarySearch( int arr[],  int n, int key){
    int low = 0,high= n-1;
    int mid = low + (high-low)/2;

    while(low<=high){
        if(arr[mid] == key){
            return mid;
        }
       
        if(key > arr[mid] ){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        mid = low + (high-low)/2;
    }
    return -1;
}


int main(){

    int arr[10] ={ 2,5,10,54,90,91,800,1000,1001,10000};

    int result = BinarySearch(arr,10,1001);
    cout <<" Index is "<< result<<endl;

    return 0;
}