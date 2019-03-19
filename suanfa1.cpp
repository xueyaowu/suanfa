#include "iostream"
#include "algorithm"
using namespace std;

int main()
{
    int n, i, s, x, *a;//s统计该元素重数,x表示该重数对应的元素
	int m = 0, MAX = 0; //m为标记元素，MAX标记出现的最大
    printf("请输入数组的长度：");
    scanf("%d", &n);
    a=new int[n];
    printf("请输入数据：");
    
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

    printf("众数是：%d\n重数是：%d\n", x, MAX);
    return 0;    
}
