#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(int arr [], int size){
     int total =0;
     for(int i=0;i<size; i++){
        total += arr[i];
     }
     return total;
}

int main(){

    int arr [] = {12,58,35,47};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr,size);


    return 0;
}