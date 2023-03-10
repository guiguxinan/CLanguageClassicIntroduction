#include <iostream>

using namespace std;

int main()
{
    /*以字符为条件的while语句*/
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout<<"大河向东流，天上的星星参北斗！\n";
        cout<<"再看一遍？按y/n:\n";
        cin>>choice;
    }
    cout<<"程序执行完毕！再见！";
    return 0;
}
