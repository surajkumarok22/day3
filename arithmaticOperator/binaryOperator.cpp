#include<iostream>
using namespace std;

int main()
{
    int x = 25;
    int y = 30;

    cout<<" x + y ="<<x+y<<endl;//55
    cout<<" x - y ="<<x-y<<endl;//-5
    cout<<" x * y ="<<x*y<<endl;//750
    cout<<" x / y ="<<x/y<<endl;//0
    cout<<" x % y ="<<x%y<<endl;//25
    
    // unary operator

    ++x;
    ++y;
    cout<<"++x ="<<x<<endl; // 26
    cout<<"++y ="<<y<<endl;//31

    // post increament
    cout<<"x++ ="<<x++<<endl; // 26
    cout<<"y++ ="<<y++<<endl;//31
    return 0;
}