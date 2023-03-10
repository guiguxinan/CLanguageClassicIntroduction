# include<iostream>
using namespace std;
/*
如果要返回一个整数，将返回值类型设为int
*/
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a=1, b=2;
    int c = add(a, b);
    cout<<c<<endl;
}