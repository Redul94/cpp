// Array is the first Data Structure
// We can store same types of var in array
// Linear Data Structure
// Array syntex
// Creation

#include <iostream>
using namespace std;

int main(){
    // array create
    int max [5];
    max[0] =15;
    max [1] = 25;
    // array create with value initiallation
    int mat[] = {99,45};
    
    // Print Array values using loop
    for(int i=0;i<sizeof(mat)/4;i++){
        cout << mat[i] << endl;
    }
    return 0;
}

