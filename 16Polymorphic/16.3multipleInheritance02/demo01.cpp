#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/02/28 15:30:57
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/
class Father{
    public:
        Father(){cout<<"Father构造\n";}
        virtual ~Father(){cout<<"Father析构\n";}
        virtual void smart()const{cout<<"父亲很聪明\n";}
};

class Mother{
    public:
        Mother(){cout<<"Mother构造\n";}
        virtual ~Mother(){cout<<"Mother析构\n";}
        virtual void beautiful()const{cout<<"母亲很漂亮\n";}
};

class Son:public Father,public Mother{
    public:
        Son(){cout<<"Son构造\n";}
        void smart()const{cout<<"son很聪明\n";}
        void beautiful()const{cout<<"son很帅气\n";}
        ~Son(){cout<<"Son析构\n";}
};

int main()
{
    Father *David[2];
    Mother *Xun[2];
    Father *pf;
    Mother *pm;
    int choise,i;
    for (i = 0; i < 2; i++)
    {
        cout<<"1. Father\n2. son\n";
        cin>>choise;
        if (choise == 2)
        {
            pf = new Son;
        }else{
            pf = new Father;
        }
    David[i] = pf;
    cout<<"\n David["<<i<<"]:";
    David[i]->smart();
    delete David[i];
    }
    for (i = 0; i < 2; i++)
    {
        cout<<"\n 1. Mother\n2. son\n";
        cin>>choise;
        if (choise == 2)
        {
            pm = new Son;
        }else
        {
            pm = new Mother;
        }
        Xun[i] = pm;
        cout<<"\n Xun["<<i<<"]:";
        Xun[i]->beautiful();
        delete Xun[i];
    }
    
    return 0;
}
