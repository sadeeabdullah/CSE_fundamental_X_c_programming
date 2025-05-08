#include<stdio.h>
int count_before_one();
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) //taking input of the array element
    {
        scanf("%d", &arr[i]);
    }
    
    return 0;
}