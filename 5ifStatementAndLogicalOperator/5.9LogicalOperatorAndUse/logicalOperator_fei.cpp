#include <iostream>

using namespace std;

int main()
{
   /*逻辑非*/
   int x;
   cout<<"任意输入一个整数："<<endl;
   cin>>x;
   if (!x==0)   // 当输入x不等于0时，输出语句
   {
        cout<<"x不等于0";
   }
   else
   {
        cout<<"恭喜，中奖了";
   }
   return 0;
}
