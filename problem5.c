#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    int arr[100];
    int *p;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    p = arr;
    for(i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    printf("%d", sum);
    return 0;
}