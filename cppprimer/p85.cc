#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: "
         << endl;
    string result;       // will hold the resulting hexify'd string
    string::size_type n; // hold numbers from the input
    while (cin >> n)
    {
        if (n < hexdigits.size())   // ignore invalid input
            result += hexdigits[n]; // fetch the indicated hex digit
        if (n == -1)
            break;
    }

    cout << "Your hex number is: " << result << endl;
    //     const string hex = "123456789ABCDEF";

    //     cout << "Enter a aseries of number between 0 and 15"
    //          << " Separated by spaces. Hit ENTER when finished: "
    //          << endl;
    //     string result;
    //     string::size_type n;
    //     while (cin >> n)
    //     {
    //         //result += hex[n];
    //         if (n == -1)
    //             break;
    //         if (n < hex.size())
    //             result += hex[n];
    //     }
    //     cout << "Your hex number is : " << result << endl;
    //     return 0;
    // }
}