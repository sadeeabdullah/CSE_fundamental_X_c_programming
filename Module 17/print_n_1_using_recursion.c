#include<stdio.h>
print_n_1(int i){
    printf("%d\n", i);
    i--;
    if (i == 0)
    {
        return;
    }
    print_n_1(i);
    
}
int main(){
    int i = 5;
    print_n_1(i);
    return 0;
}