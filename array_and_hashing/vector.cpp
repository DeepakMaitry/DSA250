#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> number;
    number.push_back(1);
    number.push_back(3);
    number.push_back(5);
    number.push_back(2);

    cout << number[0] << " " << number[1] << " " << number[2] << endl;

    number[0] = 0;
    cout << number[0] << endl;

    // # look at all values
    for (int x : number)
    {
        cout << x << " ";
    }

    // # Order is always same.

    // size of vector 
    cout << endl << number.size() << endl;

    // remove the last element
    number.pop_back();
    cout << number.size() << endl;

    // removing from middle is slow 
    number.erase(number.begin() + 1);
    for(int y : number)
    {
        cout << y << " ";
    }
    cout << endl; 

    // Vector is used in dsa to store numbers 

    return 0;
}