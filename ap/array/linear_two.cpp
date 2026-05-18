// Problem:
// Given an array and a number x, find the element whose value is closest to x.
// If multiple answers exist, print the first one.

// Input:

// n
// array of n integers
// integer x

// Output:

// Print the closest value
// ▶ Example

// Input:
// n = 6
// Array = [10, 22, 28, 29, 30, 40]
// x = 27

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(){
 
    int arr[] = {10,22,28,29,30,40};
    int c = 27;
    int minn = INT_MAX;
    int ind;

    for(int i = 0;i <6;i++){
        if(abs(arr[i] - c) < minn){
            minn = abs(arr[i]-c);
            ind = arr[i];
        }
            
    }
    cout << ind << endl;
    return 0;
}