#include<stdio.h>
int main(){
    int n, len = 0;
    scanf("%d", &n);
    //for getting the digits of number
    for (int i = 0; n > 0; i++)
    {
        int digit = n % 10;
        printf("%d\n", digit);
        len++;
        n /= 10;
    }

    // for (int i = 0; n > 0; i++) // for checking from the right side
    // {
    //     for (int i = 0; ; i++)
    //     {
    //         /* code */
    //     }
        
    // }
    printf("%d", len);

    // while (n > 10)
    // {
    //     printf("%d\n", n / 10);
    // }
    
    
    
    return 0;
}