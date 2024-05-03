#include<iostream>
using namespace std;

int main(){
    cout<<(bool)3 +2<<endl;// (bool)any number except 0 = 1, so here output is 1+2 = 3
    cout<<(bool)-5 +5<<endl;// (bool)-5 = 1(true) so output is 6
    cout<<(bool)0 +5<<endl;// (bool)0 = 0(false) so output is 0+5 = 5  

    //practice question

    cout<<(23.5+5+'A')<<endl;
    cout<<("suraj"+25)<<endl;//runtime failure c++ doesn't concreate 
    return 0;
}