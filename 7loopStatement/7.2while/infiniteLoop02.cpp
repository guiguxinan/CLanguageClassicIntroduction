#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int i;
        cout<<"\n请输入一个数字：\n";
        cin>>i;
        if (i == 5)
        {
            cout<<"你中奖啦，请继续：\n";
            continue;
        }
        if (i == 6)
        {
            cout<<"可惜了，差一点！\n";
            break;
        }
        cout<<"输入数字为："<<i<<endl;
    }
    cout<<"程序结束，再见！\n";
}
