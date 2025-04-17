
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int N, k, x[10001];
    int i, j, tmp;

    scanf("%d %d", &N, &k);

    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 1 + i; j < N; j++)
        {
            if (x[i] < x[j])
            {
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }

    printf("%d", x[k-1]);

    return 0;
}

