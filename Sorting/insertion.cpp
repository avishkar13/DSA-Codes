#include <iostream>
using namespace std;

void insertion(int arr[], int size)
{
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int arr[10] = {20, 56, 28, 10, 36, 85, 41, 26, 23, 2};
    insertion(arr, 10);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}