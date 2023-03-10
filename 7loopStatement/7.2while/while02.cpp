#include <iostream>

using namespace std;

int main()
{
    /*带运算符的while语句*/ 
    int i;
    cout<<"请输入一个数字：\n";
    cin>>i;
    while (i<100 && i>1)
    {
        cout<<"i:"<<i<<endl;
        i++;
    }
    return 0;
}
