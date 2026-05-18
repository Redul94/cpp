// Swap the min max value of an array

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

void swapArray(int arr[], int size)
{
    int min = INT_MAX, minInd;
    int max = INT_MIN, maxind;

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minInd = i;
        }

        if (max < arr[i])
        {
            max = arr[i];
            maxind = i;
        }
    }
    swap(arr[minInd], arr[maxind]);
}
int main()
{

    int arr[] = {12, 58, 35, 47};
    int size = sizeof(arr) / sizeof(arr[0]);
    swapArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}