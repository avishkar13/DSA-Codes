//Sort 0,1
#include <iostream>
using namespace std;

void SortArray(int arr[]){

    int i = 0, j = 9;

    while (i <= j) {
        if (arr[i] == 0) {
            i++;
        } else if (arr[j] == 1) {
            j--;
        } else {
            // arr[i] == 1 and arr[j] == 0
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}


int main(){

    int arr[10] ={ 0, 0,1,0,1,0, 1, 1, 0, 1};

    SortArray(arr);

     for(int k = 0; k < 10; k++ ){
            cout<< arr[k]<< " ";
        }

    return 0;
}