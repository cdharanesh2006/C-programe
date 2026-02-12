#include <stdio.h>
int main()
{
    int n;
    int amount;
    int total=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&amount);
        total=total+amount;
    }
    if (total>10000)
    {
        printf("Limit Exceeded");
    }else
        printf("Approved");
    return 0;
}