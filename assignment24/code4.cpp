#include <iostream>
using namespace std;
//  print Pascal Triangle up to N lines.
int pas(int);
int main()
{
    int n;
    cout << "Enter the value N : " << endl;
    cin >> n;
    cout << pas(n);
}
int pas(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl
             << endl;
    }
}