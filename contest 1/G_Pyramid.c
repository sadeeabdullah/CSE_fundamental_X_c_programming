#include<stdio.h>
void rec(int n, int i, int star,int space){
    if (i > n)
    {
        return;
    }
    for (int j = space-1; j > 0; j--)
    {
        printf(" ");
    }
    for (int k = 1; k <= star; k++)
    {
        printf("*");
    }
    printf("\n");
    rec(n,i + 1,star + 2,space - 1);
    
}
int main(){
    int n;
    scanf("%d", &n);
    rec(n, 1,1,n);
    return 0;
}