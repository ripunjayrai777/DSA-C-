#include <iostream>
#include <cmath>
using namespace std;

void pwr(int, int);
int main()
{
    int x, y;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    cout << "Enter the value of y : " << endl;
    cin >> y;
    pwr(x, y);
}
void pwr(int a, int b)
{
    cout << "Your powered value : " << pow(a, b);
}