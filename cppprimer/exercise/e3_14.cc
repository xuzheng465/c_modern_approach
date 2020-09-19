#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int number;
    vector<int> ints;
    while (cin.good())
    {
        cin >> number;
        ints.push_back(number);
    }
    for (auto x : ints)
    {
        cout << x << endl;
    }
    return 0;
}