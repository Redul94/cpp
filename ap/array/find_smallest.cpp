// Find smallest value from array
#include <iostream>
using namespace std;

int main(){

    int max [] = {45,85,63,2,105};
    int sm = INT_MAX;
    for (int i= 0 ; i<5;i++){
        if(max[i] < sm)
            sm = max[i];

    }
    cout << sm << endl;
    return 0;
}

