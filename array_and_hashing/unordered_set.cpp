#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{

    // Think of unordered_set as a cupboard of UNIQUE toys

    /*
    You don’t store numbers

    You store only toy names

    No duplicate toys allowed
    */

    unordered_set<string> toy;
    toy.insert("apple");
    toy.insert("banana");
    toy.insert("grapes");

    // check if toy exists
    if (toy.find("ball") != toy.end())
    {
        cout << "Ball is present" << endl;
    }
    else
    {
        cout << "Ball is not present" << endl;
    }

    toy.erase("apple");

    // look at all toys
    for (auto t : toy)
    {
        cout << t << " ";
    }

    // where it is used
    // To check duplicates
    vector<int> nums = {1, 2, 3, 2, 4};

    unordered_set<int> seen;

    for (int x : nums)
    {
        if (seen.find(x) != seen.end())
        {
            cout << "Duplicate found";
        }
        seen.insert(x);
    }

    // Fast YES / NO checking

    unordered_set<int> allowed;

    allowed.insert(5);
    allowed.insert(8);

    if (allowed.count(5))
    {
        cout << "Allowed";
    }

    // ### no indexing you must use find, count



    return 0;
}