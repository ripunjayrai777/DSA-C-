#include <conio.h>
#include <iostream>
using namespace std;

int add(int, int);
int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << add(a, b);
    return 0;
}
int add(int x, int y)
{
    return (x + y);
}