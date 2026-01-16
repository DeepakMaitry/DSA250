// best for speed ,  o(n) time 

#include <bits/stdc++.h>
// g++ file.cpp -o file

// #include <iostream>
// #include <vector>
// #include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen; // our notebook of numbers we've seen
    for (int x : nums) {
        if (seen.count(x)) { // already seen? duplicate found
            return true;
        }
        seen.insert(x); // first time seeing this number
    }
    return false; // no duplicates
}

int main() {
    vector<int> nums = {1, 2, 3, 3};
    cout << (containsDuplicate(nums) ? "true" : "false") << "\n";
    return 0;
}