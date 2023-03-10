#include <iostream>

using namespace std;

int main()
{
   /*
   逻辑运算符
   1.逻辑与 &&
   */
   cout<<"请输入一个大于1的整数:\n";
   int x;
   cin>>x;

   if (x>1&&x<100)
      cout<<"x大于1小于100\n";
   else
      cout<<"x大于或者等于100\n";

   return 0;
}
