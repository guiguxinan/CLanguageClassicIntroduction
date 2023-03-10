#include<iostream>
using namespace std;
/*
字符型的定义与使用
    可用来定义英文字符和标定符号
*/
void show();
int main()
{
    char str;   //声明字符变量str
    str = 'A';  //将字符A存储到str代表的地址中
    cout<<str<<endl;    //输出字符str
    cout<<(int)str<<endl; //  输出字符的ASCII码
    show();
    return 0;
}

void show()
{
    // 打印ASCII码值为32到127之间的所有字符
    for (int i=32; i<128; i++)
    {
        cout<<(char)i<<" ";
    }
}