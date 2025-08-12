#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[], int size)
{
   int i=0;

    while ( i+1 < size )
    {
        swap(arr[i], arr[i+1]);
       i+=2;
    }
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

    reverse(arr,n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}