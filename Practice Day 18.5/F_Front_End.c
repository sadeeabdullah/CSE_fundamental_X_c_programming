#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    //taking input of the array element
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = n - 1; j >= 0; j--){
            if (i < j)
            {
                arr[i + 1] = arr[j];
                arr[i + 2] = arr[i + 1];
                arr[i + 3] = arr[j-1];
                arr[i + 4] = arr
            }
            
        }
    }
    
    
    return 0;
}