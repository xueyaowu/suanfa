#include "iostream"
#include "algorithm"
using namespace std;

int main()
{
    int n, i, s, x, *a;//sͳ�Ƹ�Ԫ������,x��ʾ��������Ӧ��Ԫ��
	int m = 0, MAX = 0; //mΪ���Ԫ�أ�MAX��ǳ��ֵ����
    printf("����������ĳ��ȣ�");
    scanf("%d", &n);
    a=new int[n];
    printf("���������ݣ�");
    
    for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
    sort(a,a+n);
    
    for(i = 0; i < n; i++){
        if(m != a[i])
            s = 1;
        else
            s++;
        m=a[i];
        if(s > MAX)
        {
        	x = m;
            MAX = s;
        }
    }

    printf("�����ǣ�%d\n�����ǣ�%d\n", x, MAX);
    return 0;    
}
