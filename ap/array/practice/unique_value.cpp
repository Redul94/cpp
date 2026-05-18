// Print unique value from an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 1, 2, 45, 8, 8, 96, 9, 9, 6,7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int uni[] = {0};
    for (int i = 0; i < size; i++)
    {
        bool dup = false;
        for (int j = 0; j < size; j++)

        {
            if (arr[i] == arr[j] && i != j)
            {
                dup = true;
            }
        }
        if (dup != true)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}