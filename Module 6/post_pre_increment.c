#include<stdio.h>
int main(){
    int x = 10;
    int f =  10;
    //post increment: will increase the value after execution
    int y = x ++;
    //pre increment: will  increase the value before any other execution
    int z = ++f;
    printf("%d %d",y,z);
    return 0;
}