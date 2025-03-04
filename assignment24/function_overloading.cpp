// function overloading : It means we can create multiple function of same name which have similar work but doing in different part.
// as Example area() we are going to create two different function of same name first one for the area of rectangle and other one for area of circle. "work are similar in both function is find area ."

#include <iostream>
using namespace std;

int area(int, int); // declaring function which have passes two argument;
float area(float);  // declaring function which have passes one argument;
int main()
{
    int r;
    cout << "Enter the radius of Circle: " << endl;
    cin >> r;
    float rad = area(r);
    cout << "Area of Circle : " << rad << endl;
    int l, b;
    cout << "Enter the Length and Breadth of rectangle:" << endl;
    cin >> l >> b;
    cout << "Area of Rectangle is : " << area(l, b);
}
int area(int x, int y) // define function
{
    return (x * y);
}
float area(float r) // define function
{
    return (3.14 * r * r);
}
//  important: function ke name same hone pr argument me changes ho hi chahiya varana error ayega..
//  important: ye kaam compile ka hai ki kaun se time pr kaun sa function call karna hai ya bind karna ye function binding bhi kehate hai..
//  there are three rule for decide to compiler which function call is bind with which function..
// Rule 1. Exact Match (means check the numbers of arguments passes or type define..)
// Rule 2.