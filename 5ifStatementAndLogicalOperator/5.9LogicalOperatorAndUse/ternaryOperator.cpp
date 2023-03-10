#include <iostream>

using namespace std;

int main()
{
    /*
    if语句：
    if(a > b)
        z = a;
    else 
        z = b;
    三目运算符
    z = (a > b) ? a : b;
    如果a大于b，z取值？右边的a，否则z取值：右边的b

    */
    int a,b,c;
    cout<<"请输入a的值："<<endl;
    cin>>a;
    cout<<"请输入b的值："<<endl;
    cin>>b;
    c = (a > b) ? a : b;
    cout<<"c的值为"<<c;
    return 0;
}
