#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> toy;
    toy["apple"] = 10;
    toy["mango"] = 2;
    toy["banana"] = 4;
    toy["grapes"] = 3;
    toy["papaya"] = 5;

    cout << toy["apple"] << endl;

    // # check if toy exists
    if (toy.find("ball") != toy.end())
        cout << "Ball exists";
    else
        cout << "Ball not exists" << endl;

    // # look at all toys
    for (auto it : toy)
    {
        cout << it.first << " " << it.second << endl;
    }

    // # where can I apply
    // counting things - Count how many times each word appears
    toy["apple"]++;
    cout << endl
         << toy["apple"] << endl;
    // Marks / Scores / Data by name
    //
    // 3. Presence checking (YES / NO)
    unordered_map<int, bool> seen;

    seen[5] = true;
    seen[10] = true;

    // 4. Index lookup (very common in DSA)
    unordered_map<int, int> index;

    index[10] = 0;
    index[20] = 1;

    // Frequency of numbers (DSA favorite)
    unordered_map<int, int> freq;

    freq[4]++;
    freq[4]++;
    freq[2]++;

    return 0;
}
