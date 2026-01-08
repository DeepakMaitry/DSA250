#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2 * n);  // create array of size 2n
    
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];       // first half
        ans[i + n] = nums[i];   // second half
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1, 4, 1, 2};
    vector<int> ans = getConcatenation(nums);
    
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}