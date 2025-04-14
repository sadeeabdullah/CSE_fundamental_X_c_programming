//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
int main(){
    int nValue, n,max = 0;
    scanf("%d",&nValue);
    for (int i = 1; i <= nValue; i++)
    {
        scanf("%d",&n);
        if (max<=n)
        {
            max = n;
        }
        
    }
    printf("%d",max);
    
    return 0;
}