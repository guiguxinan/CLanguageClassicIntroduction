#include <iostream>
using namespace std;
int main()
{
    int n;
    int l = 0;
    char * A;
    cout << "����n��ֵ��";
    cin >> n;
    A = new char[n];
    cout << "����" << n << "���ַ�����";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "����ַ���:";
    for (int i = 0; i < n; i++) {
        cout << A[i];
    }
    // delete[]A;
    return 0;
}