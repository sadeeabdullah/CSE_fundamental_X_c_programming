//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include<stdio.h>
int main(){
    int n,nValue,x;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nValue);
        arr[i]= nValue;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}