#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/**
 * File    :   case01.cpp
 * Time    :   2023/03/06 21:26:09
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   使用流操作符控制浮点数输出
*/

int main()
{
    double x = 1234567.89,y=1.23456789;
    cout<<"无格式控制：\t\t\t1) x=("<<x<<"),y=("<<y<<")\n";
    cout<<"保留五位有效数字：\t\t2) x=("<<setprecision(5)<<x<<"),y=("<<y<<")\n";
    cout<<"保留小数点后五位：\t\t3) x=("<<fixed<<setprecision(5)<<x<<"),y=("<<y<<")\n";
    cout<<"科学计数法且保留小数点后5位:\t4) x=("<<scientific<<setprecision(5)<<x<<"),y=("<<y<<")\n";
    cout<<"非负数显示正号，输出宽度为12字符，宽度不足时用*填补"<<endl;
    cout<<"5) " <<showpos<<setw(12)<<fixed<<setfill('*')<<y<<endl;
    cout<<"非负数不显示正号，输出宽度为12字符，宽度不足时右边用填充字符填补"<<endl;
    cout<<"6) " <<noshowpos<<setw(12)<<left<<y<<endl;
    cout<<"输出宽度为12的字符，宽度不足时左边用填充字符填充\n";
    cout<<"7) "<<setw(12)<<right<<y<<endl;
    cout<<"输出宽度为12的字符，宽度不足时，负号和数值分列左右，中间用填充字符填充\n";
    cout<<setw(12)<<internal<<-y<<endl;
    return 0;
}
