#include <iostream>
using namespace std;
int main()
{
    int n;
    int l = 0;
    char * A;
    cout << "输入n的值：";
    cin >> n;
    A = new char[n];
    cout << "输入" << n << "个字符串：";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "输出字符串:";
    for (int i = 0; i < n; i++) {
        cout << A[i];
    }
    // delete[]A;
    return 0;
}