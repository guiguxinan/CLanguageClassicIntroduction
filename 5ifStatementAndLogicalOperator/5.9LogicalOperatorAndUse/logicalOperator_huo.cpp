#include <iostream>

using namespace std;

int main()
{
    /*
    逻辑或   || 
    */
    int x;
    cout<<"任意输如一个整数："<<endl;
    cin>>x;
    if (x>1 || x<100)   // 表达式中其中一个条件为真则输出语句
    {
        cout<<"x大于1小于100";
    }
    
    return 0;
}
