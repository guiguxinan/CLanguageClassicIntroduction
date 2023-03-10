#include <iostream>

using namespace std;

int main()
{
    /*continue语句：
        在循环体某处加上continue后，程序不再执行后面的语句，而是跳转到循环体开始的地方继续执行*/ 
    int i = 0;
    while (i<4)
    {
        i++;
        if (i == 1)
        {
            continue;
        }
    cout<<"i:"<<i<<endl;
    }
    
    return 0;
}
