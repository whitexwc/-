#include<cstdio>
const int maxn=11;
int n,p[maxn],hashTable[maxn]={false};
void generate(int index)
{
    if(index==n+1)
    {
        for(int i=1;i<=n;i++)
            printf("%d",p[i]);
        printf("\n");
        return;
    }
    for(int x=1;x<=n;x++)
    {
        if(hashTable[x]==false)
        {
            p[index]=x;
            hashTable[x]=true;
            generate(index+1);
            hashTable[x]=false;

        }
    }
}
int main()
{
    scanf("%d",&n);
    generate(1);
    return 0;
}
