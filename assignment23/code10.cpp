#include <iostream>
using namespace std;

int main()
{
    // add all the numbers of an array of size 10..
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}