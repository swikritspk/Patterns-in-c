

#include <stdio.h>

int main()
{
    int i, j, k;

    for(i = 1; i <= 7; i++)
    {
        if(i == 1 || i == 7)
        {
            for(j = 1; j <= (i==1 ? 6 : 7); j++)
                printf(" ");
            printf("*\n");
        }
        else if(i == 2 || i == 6)
        {
            for(j = 1; j <= 6; j++)
                printf(" ");
            for(k = 1; k <= 3; k++)
                printf("*");
            printf("\n");
        }
        else if(i == 4)
        {
            for(j = 1; j <= 4; j++)
                printf(" ");
            for(k = 1; k <= 7; k++)
                printf("*");
            printf("\n");
        }
        else
        {
            for(j = 1; j <= 3; j++)
                printf(" ");
            for(k = 1; k <= 9; k++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}
