#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1 ;
    for (int i = 1; i <= n; i++) // printing the for line
    {
        for (int j = space -1 ; j >= 0; j--) //printing the space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) //printing the star
        {
            printf("*");
        }
        printf("\n");
        star += 2;;
        space--;
    }
    
    return 0;
}