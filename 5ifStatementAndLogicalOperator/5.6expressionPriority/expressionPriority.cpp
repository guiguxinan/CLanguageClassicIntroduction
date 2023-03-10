#include <iostream>

using namespace std;

int main()
{
   /*
   表达式优先级
   ()>乘除>加减
   */
   double a = 2 + 4 * 2, b = (3 + 1) / 2;
   
   cout<<a<<"\n"<<b<<endl;
   return 0;
}
