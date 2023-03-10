#include <iostream>

using namespace std;
class A{
    public:
    int m;
    int *p = &m;
};
int main()
{   
    A a1;
    a1.m=10;
    cout<<a1.m<<endl;
    return 0;
}
