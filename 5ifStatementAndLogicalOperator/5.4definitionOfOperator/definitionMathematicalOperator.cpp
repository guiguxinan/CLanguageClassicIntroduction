#include <iostream>

using namespace std;

int main()
{
   /*
   数学运算符
   加+
   减-
   乘*
   除/
   取模%：取余数
   */
   cout<<10+2<<endl;
   cout<<10-2<<endl;
   cout<<10*2<<endl;
   cout<<10/2<<endl;
   // 输出小于60的数字，要求每6个数字输出一行
   for (int i = 0; i < 60; i++)
   {
        if (i % 6 == 0)
        {
        /* 每行有6个数字后换行 */
            cout<<"\n"<<endl;
        }
        cout<<i<<"\t";
   }
}
