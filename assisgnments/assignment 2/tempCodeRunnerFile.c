#include<stdio.h>
int main(){
    int n, v, x;
    scanf("%d",&n);
    int arr[n];

    //taking input of array values
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d", &x, &v);
    arr[x] = v;

    // output reverse
    for (int i = n; i <= 0; i--)
    {
        printf("%d",arr[i]);
    }
    

    
    return 0;
}