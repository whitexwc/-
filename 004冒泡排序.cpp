#include<cstdio>
int main()
{
    int a[]={3,4,1,5,2,6},temp;
    for(int i=1;i<=5;i++)//�Ƚϵ�������n�����Ƚ�n-1��
    {
        for(int j=0;j<=6-i;j++)//ÿһ�˱ȽϵĴ�����n-�ڼ���
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
