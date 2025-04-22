#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%c",&s);
    int length = strlen(s);
    int sum = 0;
    for (int i = 0; i < length ; i++)
    {
        sum += s[i];
    }
    
    return 0;
}