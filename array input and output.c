#include<stdio.h>
int main()
{
     int i,n;
     scanf("%d",&n);
    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d th number array value %d\n",i,ara[i]);
    }


    return 0;
}
