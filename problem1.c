#include <stdio.h>
int main()
{
    int n;
    int expense;
    int total=0;
    int days=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&expense);
        total+=expense;
        if (expense > 1000)
        {
            days++;
        }
    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days: %d",days);
    return 0;
}