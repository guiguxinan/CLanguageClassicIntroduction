#include <iostream>

using namespace std;

int main()
{
    /*限制while循环的次数*/ 
    int i,j;
    cout<<"你想看几次？\n";
    cin>>j;
    i = 0;
    while (i<j)
    {
        cout<<"问君能有几多愁，恰似一江春水向东流。\n";
        i++;
    }
    cout<<"程序执行结束！";
    return 0;
}
