#include <iostream>

using namespace std;

int main()
{
   /*
   自加 ++
   前置自加 ++a 先做加法再赋值
   后置自加 a++ 先赋值再做加法
   */
   int a = 1;
   cout<<"前置自加"<<++a<<endl;
   cout<<"后置自加"<<a++<<endl;
   
   return 0;
}
