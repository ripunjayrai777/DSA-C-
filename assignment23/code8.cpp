#include <iostream>
using namespace std;

int main()
{
    // swap the value of two int variable without using thrid variable..
    int val1 = 5, val2 = 9;
    val1 = val1 + val2;
    val2 = val1 - val2;
    val1 = val1 - val2;
    cout << val1 << endl;
    cout << val2;
    return 0;
}