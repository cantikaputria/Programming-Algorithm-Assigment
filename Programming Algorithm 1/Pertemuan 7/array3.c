#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int i;
    int tabInt[n];

    for (i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }

    for (i=0; i < n; i++)
    { if (tabInt[1] % 2 == 1)
        {
        printf("kotak %d = %d\n", n, tabInt[i]);
        }
    }

    return 0;
}