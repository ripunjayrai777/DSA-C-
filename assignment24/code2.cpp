#include <iostream>
using namespace std;

void hiVal(int, int);
int main()
{
    int num1, num2;
    cout << "Enter the first numbers which u want to compare" << endl;
    cin >> num1;
    cout << "Enter the first numbers which u want to compare" << endl;
    cin >> num2;
    hiVal(num1, num2);
    return 0;
}
void hiVal(int x, int y)
{
    if (x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    if (x == y)
    {
        cout << x << " is equal to " << y << endl;
    }
    else
    {
        cout << x << " is less than " << y << endl;
    }
}