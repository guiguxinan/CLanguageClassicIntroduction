#include <iostream>

using namespace std;

int main()
{
   /*枚举型常量*/
   // 定义一个枚举型常量day,Sunday对应整数0，Monday对应整数1，以此类推
   enum day{Sunday,Monday,Tuesday,Wendnesday,thursday,Friday,Saturday};
   // 使用枚举类型day创建一个变量today
   day today;
   // 给变量today赋值为Monday
   today = Monday;
   // 判断today是否为Sunday或者Saturday，是输出“休息日”，否则输出“工作日”
   if (today == Sunday || today == Saturday)
   {
    cout<<"休息日\n";
   }
   else
    cout<<"工作日\n";
   return 0;
}
