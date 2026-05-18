// Problem:
// You are given an array of size n and a number x.
// Find the length of the longest continuous subarray where all elements are not equal to x.

// Input:

// n
// array of n integers
// integer x

// Output:

// Print the maximum length
// ▶ Example

// Input:
// n = 8
// Array = [1, 2, 3, 2, 2, 4, 5, 2]
// x = 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {1,2,3,2,2,4,5,2};
    int l =0;
    for(int i =0;i<8;i++){
        if(arr[i] == 2){
            
            return l=0;
        }
            
        else 
            l++;
    }
    cout << l << endl;
    return 0;
}