#include <iostream>

using namespace std;
class A{
    int a,b;
    public:
    A(int aa=0,int bb=0){a=aa;b=bb;}
};
int main()
{
   A *p;
   p = new A(4,5);
   return 0;
}
