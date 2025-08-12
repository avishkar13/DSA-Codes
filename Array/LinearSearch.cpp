#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key)
{
    bool isfound = false;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            cout << "The value " << key << " is present at index : " << i << endl;
            isfound = true;
        }
    }
    if (!isfound)
    {

        cout << "The Value is not present in the array!";
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

    int key = 0;
    cout << "Enter the value to be searched: ";
    cin >> key;

    LinearSearch(arr, n, key);

    return 0;
}