#include <iostream>
#include <cmath>
using namespace std;
// function to check whether a given number is a Prime number or not.
int isPrime(int);
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (isPrime(num) == 0)
    {
        cout << num << " is not a Prime Number";
    }
    else
    {
        cout << num << " is a Prime Number";
    }
    return 0;
}
int isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}