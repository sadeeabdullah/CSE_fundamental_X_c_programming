#include <stdio.h>
int main()
{
    long long int n, m, k, katryoshka_count = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    // if eyes or body is not available then no katryoshka is not possible to make
    if (n == 0 || k == 0)
    {
        printf("0");
        return 0;
    }

    // now checking if eyes and body is available if available the formation of katryoshka is possible according to the first formation
    else if (n % 2 == 0 && k > 0 && m == 0)
    {
        // printf("hello from 2nd form");
        while (n >= 2 && k >= 1)
        {
            katryoshka_count++; // katryoshka count will increase according to the first formation
            n -= 2;             // eyes count will decrease by 2 because 2 eyes will be used to form a katryoshka
            k--;                // 1 body count will decrase because one body will be taken for forming a katryoshka
        }
    }

    else if (n > 0 && m > 0 && k > 0)
    {
        // printf("hello from 3rd form");

        while (n >= 1 && k >= 1 && m >= 1)
        {
            katryoshka_count++; // katryoshka count will increase according to the first formation
            n -= 1;             // eyes count will decrease by 1 because 1 eyes will be used to form a katryoshka
            k--;                // 1 body count will decrase because one body will be taken for forming a katryoshka
        }
    }

    printf("%lld", katryoshka_count);
    return 0;
}