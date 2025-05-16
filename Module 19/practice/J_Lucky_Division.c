#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    int is_lucky = false;
    scanf("%d", &n);
    int original = n;
    
    while (n > 0)
    {
        int digits = n % 10;
        if (digits == 4 || digits == 7||n % 4 == 0 || n % 7 == 0)
        {
            is_lucky = true;
        }
        n /= 10;
        
    }
   
    
    if (is_lucky)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}