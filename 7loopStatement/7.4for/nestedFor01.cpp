#include <iostream>

using namespace std;

int main()
{
    /*嵌套for循环：if语句可以嵌套,那么for循环也可以嵌套,嵌套就是一个循环不中包含另一个循环,外面的循环每执行一次,里面的循环都要完整地执行一次。*/ 
    //  示例：
    int a,b;    //  定义行和列
    char c;     //  定义字符
    cout<<"输入行数：";
    cin>>a;     //  输入行
    cout<<"输入列数：";
    cin>>b;     //  输入列
    cout<<"输入字符：";
    cin>>c;     //  输入字符
    for (int i = 0; i < a; i++) //  外层循环
    {
        for (int j = 0; j < b; j++) //  内层循环
        {
            cout<<c;
        }
        cout<<"\n";
    }
    
    return 0;
}
