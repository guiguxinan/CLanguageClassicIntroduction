#include <iostream>

using namespace std;

/*����ָ�룺
    int *const p;   // ��p����Ϊ����ָ�룬ָ��p���ɱ�
*/

class ConstPointer{
    public:
        int get()const{return i;}
        void set(int x){i = x;}
    private: 
        int i;
};

int main()
{
    ConstPointer *cp1 = new ConstPointer;
    cout<<cp1<<endl;
    cp1 = cp1 + 1;
    cout<<cp1<<endl;
    cout<<"-----------------------------------------\n";
    ConstPointer *const cp2 = new ConstPointer;
    cout<<cp2<<endl;
    // cp2 = cp2 - 1;  // ����Ϊ*const��cp2���ɱ�,error: assignment of read-only variable 'cp2'
    cp2->set(2);
    cout<<cp2->get()<<endl;
    /*cp2ָ����ڴ�����޸ģ�cp2��������*/
    cout<<"-----------------------------------------\n";

    /*ָ������ָ��*/
    const ConstPointer* cp3 = new ConstPointer;
    cout<<cp3<<endl;
    cp3 = cp3 + 1;
    cout<<cp3<<endl;
    // cp3->set(2); // error: passing 'const ConstPointer' as 'this' argument discards qualifiers [-fpermissive]
    cout<<cp3->get()<<endl;
    cout<<"-----------------------------------------\n";

    /*ָ�����ĳ�ָ��*/
    const ConstPointer *const cp4 = new ConstPointer;
    cout<<cp4<<endl;
    // cp4 = cp4 + 1;  // error: assignment of read-only variable 'cp4'
    // cp4->set(1);    // error: passing 'const ConstPointer' as 'this' argument discards qualifiers [-fpermissive]
    cout<<cp4->get()<<endl;

    /*�ܽ᣺
        ָ�����ͨ���ڴ��ַ��ӷ�������,ÿ�����������Լ��ĵ�ַ,���ǿ���ͨ��ȡַ�����(&)������ǵĵ�ַ��
        ���ǵĵ�ַ���Դ洢��ָ������С����ǿ���ͨ����������(*)��ȡָ��ָ���ַ��ֵ��

        ָ���������������ָ��Ķ���������,ָ��δ����ʼ��һ�����ڴ��ַ���ɾ��һ��ָ�붼Ҫ����ָ�븳Ϊ0��
        ����Ļ����ᵼ�¸�ָ��ʧ�ء�
        
        ���粻��ı�ָ��,��ô����ָ�붨��Ϊconst,���粻��ı��ָ��ָ���ֵ,��ָ��ָ���ֵ����Ϊconst,
        ����Ȳ���ı�ָ��Ҳ����ı�ָ��ָ���ֵ,��ô��ָ���ָ��ָ���ֵ������Ϊconst��

        ��new�ڶ��п��Դ���һ������,Ȼ���ڴ��ַ����ָ��,֮�����ǾͿ���ͨ����ָ����ʶ��еĶ���,����Ҫɾ���ö���,
        ����ֻ��Ҫ��ָ��ʹ�ùؼ���delete,��ô�ͻ�ɾ��ָ��ָ��Ķ����ͷŴ洢�ö�����ڴ�ռ䡣
        ��������Ҫע��һ��,ָ�벢û�б�ɾ��,��������Ȼָ��ԭ�����ڴ�ռ�,������Ǳ���������ڴ��ַ��0�������¸�ֵ

    */
    return 0;
}
