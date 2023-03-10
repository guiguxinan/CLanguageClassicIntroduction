#include <iostream>

using namespace std;

int main()
{
    /*输入输出*/
    int oneInt, twoInt;
    char strArray[255];
    string str;
    double oneDouble;
    char oneChar = 'a';
    cout<<"分别输出两个整型值，一个字符，一个字符串和一个浮点值，\n以空格，tab键或（enter）键分隔："<<endl;
    cin>>oneInt>>twoInt>>oneChar>>strArray>>oneDouble;
    str = strArray;
    cout<<"输入的数据是："<<endl;
    cout<<"字符串是:\t\t"<<str<<endl;
    cout<<"两个整型值分别是:\t"<<oneInt<<"\t和\t"<<twoInt<<str<<endl;
    cout<<"字符是:\t\t\t"<<oneChar<<endl;
    cout<<"浮点值是:\t\t"<<oneDouble<<endl;

    return 0;
}
