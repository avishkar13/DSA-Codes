#include<iostream>
using namespace std;

void bubble(int arr[], int n, int i=0){
    //base case
    if(n == 1 || n == 0) return ;
    if(i == n-1) return bubble(arr,n-1,0);

    if(arr[i+1] < arr[i]) swap(arr[i+1] , arr[i]);

    bubble(arr,n,i+1);

}

int main(){
    int arr[6] = {20,10,50,30,80,40};

    bubble(arr,6);

    //Print Array
    cout<< "Sorted Array: " << endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}