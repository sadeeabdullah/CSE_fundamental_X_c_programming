#include<stdio.h>
int main(){
    char a[10];
    scanf("%s", &a);
    printf("%s",a);
    printf("%c",a[6]);
    return 0;
}

//string put a null character at the after index of the last character of string that is how string get to know how much it need to print
//\0 is null.
// it set the null value only after the last index