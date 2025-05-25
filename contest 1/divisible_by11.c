#include<stdio.h>
int main(){
    long long int n;
    int sum_of_even_digits = 0;
    int sum_of_odd_digit = 0;
    int digit;
    scanf("%lld", &n);
    //for loop for getting the odd and even position digit sum
    for (int i = 1; n > 0; i++)
    {
        digit = n % 10;
        if (i % 2 == 0)
        {
            sum_of_even_digits += digit ;
        }else{

            sum_of_odd_digit += digit;
        }
        n /= 10;
    }

    int difference = sum_of_odd_digit - sum_of_even_digits;
    if (difference % 11 == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}