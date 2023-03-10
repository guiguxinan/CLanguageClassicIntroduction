#include <iostream>

using namespace std;
class Operation{
    public:
        int *p = new int;
        int *p1 = new int;

        void addAndSubstract(){
            /*指针自增自减：*/ 
            cout<<"指针p保存的空间地址：\t"<<p<<endl;   // 0xf6ea0  
            p++;
            cout<<"指针p自增后地址：\t"<<p<<endl;       // 0xf6ea4  自增4字节
            p--;
            cout<<"指针p自减后地址：\t"<<p<<endl;       // 0xf6ea0  自减4字节
            p = p - 2;
            cout<<"指针减2后，指针p的地址："<<p<<endl;  //  0xf76e98
        }

        void Assignment(){
            /*指针赋值*/
            cout<<"赋值前：\n";
            cout<<"指针p的地址："<<p<<endl;
            cout<<"指针p1的地址："<<p1<<endl;
            p1 = p;
            cout<<"赋值后：\n";
            cout<<"指针p的地址："<<p<<endl;
            cout<<"指针p1的地址："<<p1<<endl;
        }

        void Decrement(){
            double *a = new double;
            double *b = new double;
            /*指针相减*/
            cout<<"相减前：\n指针a的地址值："<<a<<"\n指针b的地址值："<<b<<endl;
            *a = a - b;
            cout<<"两块内存差值："<<*a<<endl;
        }

        void compare(){
            int *c = new int;
            int *c1 = new int;
            cout<<"指针c的内存地址："<<c<<"\n指针c1的内存地址："<<c1<<endl;
            if(c>c1){
                cout<<"指针c大于c1的内存地址。\n";
            }else
                cout<<"指针c小于c1的内存地址。\n";
        }
};
int main()
{
    Operation op;
    cout<<"指针自增自减运算：\n";
    op.addAndSubstract();
    cout<<"\n指针赋值：\n";
    op.Assignment();
    cout<<"\n指针相减运算：\n";
    op.Decrement();
    cout<<"\n指针比较运算：\n";
    op.compare();
    return 0;
}
