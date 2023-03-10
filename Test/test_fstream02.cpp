#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * File    :   test_fstream02.cpp
 * Time    :   2023/03/07 23:43:39
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   从键盘输入学生学号，姓名，成绩，存入文件；学号不超过10字节，姓名不超过20字节
*/

int main()
{
    char id[11],name[21];
    float score;
    ofstream outFile("D:\\tool\\C-C++\\CLanguageClassicIntroduction\\Test\\score.txt",ios::out|ios::app);
    ifstream inFile("D:\\tool\\C-C++\\CLanguageClassicIntroduction\\Test\\score.txt",ios::in);
    // if (!outFile)
    // {
    //     cout<<"文件打开出错\n";
    //     return 0;
    // }
    // cout<<"请输入：学号 姓名 成绩\n";
    // while (cin>>id>>name>>score)
    // {
    //     outFile<<id<<" "<<name<<" "<<score<<endl;
    //     break;
    // }
    // outFile.close();
    if (!inFile)
    {
        cout<<"打开文件失败！\n";
        return 0;
    }
    cout<<"学号\t\t姓名\t\t成绩\n";
    while (inFile>>id>>name>>score)
    {
        cout<<left<<setw(10)<<id<<"\t"<<setw(10)<<name<<"\t"<<setw(3)<<right<<score<<endl;
    }
    inFile.close();
    
    return 0;
}
