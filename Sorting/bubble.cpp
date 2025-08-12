#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{
    // Iteration for eachh rounds
    for (int i = 1; i < size; i++)
    {
        bool swapped = false;

        // Iteration for swapping elements and sorting
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }

        // Already Sorted
        if (swapped == false)
            break;
    }
}

int main()
{

    int arr[10] = {20, 56, 28, 10, 36, 85, 41, 26, 23, 2};
    bubble(arr, 10);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}