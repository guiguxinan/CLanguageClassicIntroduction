#include<iostream>
using namespace std;
/*
传参
*/
int show(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b,c;
    cout<<"请输入两个整数："<<endl;
    cin>>a;
    cin>>b;
    c=show(a,b);
    cout<<"a+b="<<c<<endl;
}