#include<stdio.h>
void sum(int x, int y){ // no return so void
 
    int ans = x + y;
    printf("%d", ans);
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    
    return 0;
}