// Problem:
// You are given an array of integers. Find the first position (1-based index) where a given value x appears.
// If it does not appear, print -1.

// Input:

// First line: integer n (size of array)
// Second line: n integers
// Third line: integer x

// Output:

// Print the 1-based index of first occurrence or -1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {4,9,2,9,7};
    int val = 9;
    int ind = 0;

    for(int i =0;i<5;i++){
        if(arr[i] ==val){
            ind= i+1;
            break;
        }
            
    }
    cout << ind << endl;
    return 0;
}