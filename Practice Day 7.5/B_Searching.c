//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include<stdio.h>
int main(){
    int n,nValue,x,output = 0;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nValue);
        arr[i]= nValue;
    }
    

    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            output = i;
        }else{
            output = -1;
        }
        

    }
    printf("%d",output);
    
    

    return 0;
}