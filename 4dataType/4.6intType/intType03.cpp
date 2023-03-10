#include <iostream>

using namespace std;

int main()
{
   // 整型数据的溢出
   short int a,b,c;
   a = 32767;
   b = a + 1;
   c = b + 1;
   cout<<"a:"<<a<<"\n"
       <<"b:"<<b<<"\n"
       <<"c:"<<c;
    
   return 0;
}
/*
a:32767
b:-32768
*/