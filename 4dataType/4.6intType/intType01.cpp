#include<iostream>
using namespace std;
// 输出各个类型所占用的字节数
int main()
{
    // sizeof(param):param参数所占用的字节数
    cout<<"int:"<<sizeof(int)<<" bit"<<endl;
    cout<<"short:"<<sizeof(short)<<" bit"<<endl;
    cout<<"long:"<<sizeof(long)<<" bit"<<endl;
    cout<<"char:"<<sizeof(char)<<" bit"<<endl;
    cout<<"bool:"<<sizeof(bool)<<" bit"<<endl;
    cout<<"float:"<<sizeof(float)<<" bit"<<endl;
    cout<<"double:"<<sizeof(double)<<" bit"<<endl;
}

/*
打印结果：
int:4 bit
short:2 bit
long:4 bit
char:1 bit
bool:1 bit
float:4 bit
double:8 bit
*/