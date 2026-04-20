#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){

    int max []= {56,23,75,98,363,90};
    int sum  = INT_MAX;
    int ind;
    for(int i=0;i<6;i++){
        if(max[i] < sum){
            sum = max[i];
            ind =i;
        }
            
            

    }
    cout << ind << endl << sum;

    return 0;
}

