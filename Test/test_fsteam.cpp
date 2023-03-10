#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/**
 * File    :   test_fsteam.cpp
 * Time    :   2023/03/07 23:32:14
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   调用流类带参数的构造函数打开文件
*/

int main()
{
    // 只读模式
    ifstream inFile("D:\\tool\\C-C++\\CLanguageClassicIntroduction\\Test\\1.txt",ios::in);
    if (inFile)
    {
        cout<<"打开文件成功！"<<endl;
        // inFile.open("1.txt",ios::in);
        inFile.close();
    }else{
        cout<<"打开文件失败！\n";
    }
    
    return 0;
}
