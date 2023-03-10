#include <iostream>

using namespace std;
class A{
    int a,b;
    public:
    A(int aa,int bb){
        a = aa--;
        b = a*bb;
    }
};
int main()
{
   A a(4,5);
   return 0;
}
