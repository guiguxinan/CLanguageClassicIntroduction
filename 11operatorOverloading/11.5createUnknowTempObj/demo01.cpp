#include <iostream>

using namespace std;
/*����������ʱ����*/
class Num{
    public:
        Num(){i = 1;cout<<"���캯��ִ���С�����\n";}
        Num(int n){i = n;cout<<"���캯��ִ���С�����\n";}
        ~Num(){cout<<"��������ִ�С�����\n";}
        int get()const{return i;}
        void set(int x){i = x;}
        void add(){++i;}
        Num operator++(){
            ++i;
            // Num n;
            // n.set(i);
            return Num(i);
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
