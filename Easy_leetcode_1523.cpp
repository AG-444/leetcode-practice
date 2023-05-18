#include <iostream>
using namespace std;

class Solution {
public:
    int count;
    int countOdds(int low, int high) {
        if (high%2==1){
            return (high/2-low/2+1);
        }
        else{return high/2-low/2;};
    }
};

int main()
{
    Solution obj;
    cout<<obj.countOdds(2,13);
}
