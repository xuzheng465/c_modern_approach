#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
using namespace std;

int main()
{
    string tmp("I am a string.");
    for (auto &ch : tmp)
    {
        if (isalpha(ch))
            ch = 'X';
    }
    cout << tmp << endl;
    string s;
    cout << s[0] << endl;
    const string s2 = "Keep out!";
    for (auto &c : s2)
    {
        cout << typeid(c).name() << endl;
    }
    int k;
    cout << typeid(k).name() << endl;
}