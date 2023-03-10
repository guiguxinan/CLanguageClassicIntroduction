#include <iostream>

using namespace std;

int main()
{
    /*switch的菜单功能:
        switch语句配合永久循环,如while(1)或者if(;;),可以做出让用户进行选择的导航菜单
        该菜单永不停止,直到用户激活某一case为止。
        配合永久循环的switch导航菜单,其例程如下:*/
    bool quit = false;
    for(;;) //  进入永久循环
    {
        char i;
        cout<<"\n(0)零(1)壹(2)贰(3)鑫(4)肆(5)伍(6)陆(7)茶(8)捌(9)退出(q):";
        cin>>i;
        switch (i)
        {
        case '0':cout<<"您输入的是零！";
            break;
        case '1':cout<<"您输入的是壹!";
            break;
        case '2':cout<<"您输入的是贰!";
            break;
        case '3':cout<<"您输入的是叁!";
            break;
        case '4':cout<<"您输入的是肆!";
            break;
        case '5':cout<<"您输入的是伍!";
            break;
        case '6':cout<<"您输入的是陆!";
            break;
        case '7':cout<<"您输入的是柒!";
            break;
        case '8':cout<<"您输入的是捌!";
            break;
        case '9':cout<<"您输入的是玖!";
            break;
        case 'q':quit = true;
            break;
        default:cout<<"您输入的不是0到9之间的有效数字。";
        }
        if (quit == true)
        {
            break;
        }
    }
    cout<<"程序已结束！\n";
    return 0;
}
