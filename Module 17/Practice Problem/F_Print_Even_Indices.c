#include<stdio.h>
void print_rev_even_indices(int arr[], int n, int i){
    
    if (i == n)
    {
        return;
    }
    
    print_rev_even_indices(arr, n, i + 1);

    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }


}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    //taking input of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    print_rev_even_indices(arr, n, 0);
    return 0;
}