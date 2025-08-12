#include <iostream>
using namespace std;

void MinMax(int arr[],int size){
    int min= INT8_MAX;
    int max= INT8_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<< "The maximum value is : " << max <<endl << "The minimum Value is : " << min <<endl;

}

int main()
{
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    
    cout << "Enter the values of the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout<<endl;
    }

    MinMax(arr, n);

    return 0;
}