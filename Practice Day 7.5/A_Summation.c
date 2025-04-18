//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<stdio.h>
#include<math.h>
int main(){
    int arr_para;
    long long int sum =0,n;
    scanf("%d",&arr_para);
    int arr[arr_para];
    for (int i = 0; i < arr_para; i++)
    {
        scanf("%lld",&n);
        sum+=n;
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    
    printf("%lld",sum);
    
    return 0;
}