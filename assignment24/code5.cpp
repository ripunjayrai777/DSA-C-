#include <iostream>
using namespace std;

int isFibbo(int);
int main()
{
    int a;
    cout << "Enter a Number: " << endl;
    cin >> a;
    isFibbo(a);
    return 0;
}
int isFibbo(int num)
{
    int a = (5 * num * num) + 4;
    int b = (5 * num * num) - 4;
    if (num == a)
    {
        cout << num << " is a part of Fibbonaci";
    }
    if (num == b)
    {
        cout << num << " is a part of Fibboann";
    }
    else
    {
        cout << num << " is not part of fibbo";
    }
    return 0;
}