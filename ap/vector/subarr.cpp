// Print all sub array element

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> vec = {10,30,40,67,54};
    int sz = vec.size();
    for(int st=0;st<sz;st++){
        for(int ed=st;ed<sz;ed++){
            for(int i=st;i<=ed;i++){
                cout << vec[i] ;
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

 