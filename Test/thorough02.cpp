#include <iostream>

using namespace std;

int bigger(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

float bigger(float x, float y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

double bigger(double x, double y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

int main()
{
    int aI = 10,bI = 20;
    float aF = 30,bF = 40;
    double aD = 50,bD = 60;
    cout<<bigger(aF,bF)<<endl;
    return 0;
}
