#include <stdio.h>

int main()
{
    int n, i, max;
    int arr[100];
    int *p;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    p = arr;
    max = *p;
    for(i = 1; i < n; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    printf("%d", max);
    return 0;
}