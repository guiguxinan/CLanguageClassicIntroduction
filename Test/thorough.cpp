#include <iostream>
#include <cmath>

using namespace std;
// int func12(int,int);
// // int func12(int,int,int);
// double func12(int a,int b){return a+b;}
// // double func12(int,double);
// // double func12(double,double);
int f(int a){
    int b = 0;
    int c = 1;
    b++;
    c++;
    return int(a + pow(double(b),2)+c);
}
int main()
{
    for(int i = 0;i<3;i++){
        cout<<f(i)<<endl;
    }
    return 0;
}

