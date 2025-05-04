#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++) // printing the for line
    {
        for (int j = 0; j <= i; j++) //printing the space
        {
            printf(" ");
        }

        for (int j = n; j >= i; j--) //printing the star
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}