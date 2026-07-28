// Print the sum of maximum sub array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int sz = vec.size();
    int maxsum = 0;
    for (int st = 0; st < sz; st++)
    {
        int cs = 0;
        for (int end = st; end < sz; end++)
        {
            cs += vec[end];
            maxsum = max(cs, maxsum);
        }
        // return maxsum;
    }
    cout << maxsum;
    return 0;
}