#include<cstdio>
int main()
{
    int a=12345,b=134394;
    float c=1.23456;
    printf("%%\\");//���������%���͡�\��
    printf("\n%6d\n%6d",a,b);//�����Ҷ��룬����λ���ÿո��Զ�����
    printf("\n%06d\n%06d\n",a,b);//�����Ҷ��룬����λ����0�Զ�����
    printf("%.3f",c);//���Ա�����Ч����
    return 0;
}
