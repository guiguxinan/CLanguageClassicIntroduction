# include<iostream>
using namespace std;

int main()
{
    char *A;
    int n;
    cout<<"����n��ֵ:\n";
    cin>>n;
    A = new char[n];
    cout<<"����"<<n<<"���ַ���"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cin>>A[i];
        
    }
    cout<<"�����ַ�����\n";
    for (int i = 0; i <= n; i++)
    {
        /* code */
        cout<<A[i];
    }
    
        
    return 0;
}