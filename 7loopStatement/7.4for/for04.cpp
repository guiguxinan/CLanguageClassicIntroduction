#include <iostream>

using namespace std;

int main()
{
   /*三个条件为空的for循环*/
   int i = 0;
   for(;;)
   {
    if(i<5)
    {
        cout<<"你好！\n";
        i++;
    }
    else
        break;
   }
   return 0;
}
