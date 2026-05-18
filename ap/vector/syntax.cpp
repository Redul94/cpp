#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> vec(5,0);
    // Size Function
    vec.size();
    // Push Back -> add item into vector
    vec.push_back(45);

    for(int val : vec){
        cout << val << " ";
    }
    return 0;
}