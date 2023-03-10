#include <iostream>

using namespace std;
/*运算符重载*/
class A{
    public:
        A(){i=1;}
        ~A(){}
        int get(){return i;}
        void set(int x){i = x;}
    private:
        int i;
};
int main()
{
    A a;
    cout<<"a:"<<a.get()<<endl;
    return 0;
}
