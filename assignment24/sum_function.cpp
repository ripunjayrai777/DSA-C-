#include <iostream>
using namespace std;
// define function for sum to number..
int sum(int x, int y) // here x and y is formal argument , formal argument need to be declaration type because before now their was no existance of x and y..
{
    return (x + y);
}
int main()
{
    int a = 4, b = 7;
    int s = sum(a, b); // here we call the sum function. here a and b are actual argument, no need to define type because its already done.
    cout << "sum is " << s;
}
// if we create function above the main() function then no need of  declaration of new creating function, but if write first main function and then we create other fuction which is used main function then declaration of new creating function is important.

// jab koe function call hota hai tab vo RAM me aata hai aur jab uska execution complete ho jata hai to vo memory se release bhi ho jata hai, we can make function for better memory utilization.
