#include <iostream>

using namespace std;
/*创建临时对象*/
class Num{
    public:
        Num(){i = 1;}
        ~Num(){}
        int get(){return i;}
        void set(int x){i = x;}
        void add(){++i;}
        Num operator++(){
            ++i;
            Num n;
            n.set(i);
            return n;
        }
    private:
        int i;
};
int main()
{
    Num n1;
    cout<<n1.get()<<endl;
    Num n2 = ++n1;
    cout<<n2.get()<<endl;
    return 0;
}
