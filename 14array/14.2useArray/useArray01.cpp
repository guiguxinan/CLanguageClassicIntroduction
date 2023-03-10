#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   useArray.cpp
 * Time    :   2023/02/27 19:19:31
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/

int main()
{
    /*数组的使用*/
    // 输入10个学生的成绩，求10个学生的总成绩和平均值
    float total = 0;
    double average = 0;
    int i,n = 10;
    int a[n];
    cout<<"输入"<<n<<"个学生的成绩"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        total = total + a[i];
    }
    cout<<n<<"个学生的总成绩为："<<total<<"分\n平均成绩为："<<total/n<<"分。"<<endl;
    
    return 0;
}
