#include <iostream>

using namespace std;

int main()
{
    /*while语句：
        while(条件){}
        如果条件为真，执行{}中的语句，循环执行，直到条件为假后停止*/
    int i = 1;
    while (i < 10)
    {
        cout<<"*\n";
        i++;
    }
    cout<<"程序结束！\n";
    cout<<"*********\n";
    return 0;
}
