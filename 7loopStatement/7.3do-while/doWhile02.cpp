#include <iostream>

using namespace std;

int main()
{
    /*
    dowhile01的结果来看：
    你想看几次？
    -1
    程序结束！
    循环体不执行。如果想要循环体也执行，则使用do-while
    */ 
    int i;
    cout<<"你想看几次？\n";
    cin>>i;
    do
    {
        cout<<"问君能有几多愁，恰似一江春水向东流。\n";
        i--;
    } while (i>0);
    cout<<"程序执行结束！\n";
    return 0;
}
/*
打印结果：
你想看几次？
-1
问君能有几多愁，恰似一江春水向东流。
程序执行结束！
*/
