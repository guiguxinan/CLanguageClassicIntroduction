#include <iostream>

using namespace std;

int main()
{
    /*break语句：
        在循环体内加上break可以强制退出循环，然后继续执行循环体外的语句*/ 
    int i = 0;
    while (i < 5)
    {
        i++;
        if (i == 2)
        {
            break;
        }
    cout<<"我是循环体内的i:"<<i<<endl;
    }
    cout<<"我是循环体外的i:"<<i<<endl;
    
    return 0;
}
