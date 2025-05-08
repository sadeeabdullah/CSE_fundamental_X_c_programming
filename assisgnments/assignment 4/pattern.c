#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    // for loop for printing line
    for (int i = 1; i <= n; i++)
    {
        // for printing hash and hyfen
        for (int j = 1; j <= count; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        count += 2;
    }

    for (int i = n - 1; i >= 1; i--) // for printing the line
    {
        
    }
    

    return 0;
}