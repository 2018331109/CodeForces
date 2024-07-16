#include<stdio.h>
int main()
{
    long long n,m,i=1,p=1;
    scanf("%lld%lld",&n,&m);
    if(m>=n)
    {
        printf("%lld\n",n);
    }
    else
    {
        while(p<(n-m))
        {
            i++;
            p=p+i;
        }
        printf("%lld\n",(i+m));
    }
    return 0;
}
