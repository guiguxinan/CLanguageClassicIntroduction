#include <iostream>

using namespace std;

int main()
{
    /*for循环可以初始化多个变量*/
    for (int x = 0,y = 0,z = 0; x < 4; x++,y++,z++)
    {
        cout<<"x="<<x<<", y="<<y<<", z="<<z<<endl;
    }
     
    return 0;
}
