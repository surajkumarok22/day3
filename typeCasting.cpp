#include<iostream>
using namespace std;

int main()
{
    // there is two type of typecasting
    // 1. implicit typecasting, it is done by compiler 
    int a = 20;
    cout<<a<<endl;
    cout<<(float)a<<endl;
    cout<<'A'+1<<endl;//66
    cout<<'a'+1<<endl;//98

    // Exlicipt type of typecasting
    float pi = 3.14;
    cout<<"pi = "<<pi<<endl;//3.14
    cout<<"pi = "<<(int)pi<<endl;//3

    cout<<((float)10/3)<<endl;//3.33
    int x = 10;
    cout<<"x = "<<((char)x)<<endl;//97
    cout<<((char)'a'+1)<<endl;//b 
    return 0;
}