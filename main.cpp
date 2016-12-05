#include "jeason.h"

void tt(int j);
int main(void)
{
    int i, j;

    scanf("%d", &i);
    printf("%d\n", i);

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d X %d = %-5d", i, j, i * j);
        }
        printf("\n");
    }
}