#include <iostream>

using namespace std;

int main()
{
    /*由于while循环语句的特点，条件不满足时直接退出循环，不执行循环体内语句*/
    int i;
    cout<<"你想看几次？\n";
    cin>>i;
    while (i>0)
    {
        cout<<"恰似一江春水向东流！\n";
        i--;
    }
    cout<<"程序结束！\n";
    return 0;
}
