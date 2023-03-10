#include <iostream>

using namespace std;

int main()
{
    /*对一系列条件进行判断可以用if或者ifelse语句,但如果条件:很多的话,用if语句会比较
    麻烦,此时可用switch语句。switch语句可以根据不同的数字或者字符来选择执行不同的分支
    switch(变量)
    {
        case 1:语句;
            break;
        case 2:语句;
            break;
        case 3:语句;
            break;
        default:语句;
    }
    switch语句检查小括号中的变量,这个变量可以是数字或者字符,也可以是表达式,总之它要有一个可供判断的值。
    如果小括号中的值出现在了某个case中,与该case关联的语句就会执行。
    执行完毕后break语句会让程序跳出switch循环。
    如小括号中的值与所有的case中的数字或者字符都不相符,那么执行default分支的语句。
    如果既没有相等的值,也没有default默认分支,程序将自动退出switch语句,switch语句结束。
    */ 
    int i;
    cout<<"请输入你的值：";
    cin>>i;
    switch (i)
    {
    case 0:cout<<"您输入的是零！";
        break;
    case 1:cout<<"您输入的是壹!";
        break;
    case 2:cout<<"您输入的是贰!";
        break;
    case 3:cout<<"您输入的是叁!";
        break;
    case 4:cout<<"您输入的是肆!";
        break;
    case 5:cout<<"您输入的是伍!";
        break;
    case 6:cout<<"您输入的是陆!";
        break;
    case 7:cout<<"您输入的是柒!";
        break;
    case 8:cout<<"您输入的是捌!";
        break;
    case 9:cout<<"您输入的是玖!";
        break;
    default:cout<<"您输入的不是0到9之间的有效数字。";
    }
    cout<<"程序已结束！\n";
    return 0;
}
/*
注意：switch语句不能漏掉break
*/
