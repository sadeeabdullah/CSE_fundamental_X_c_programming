pointer is variable that stores the memory location of varibale

declaration:
data_type * pointer_name;

address to value = dereffernce
value to address = refference


we pass the value to any function if we call inside the main fucniton but we dont pass the variable.
but like:
#include<stdio.h>
void fun(int x){
    x = 20;
    printf("fun function er x er address: %p\n", &x);
}
int main(){
    int x = 45;
    fun(x);
    printf("main function er x er address: %p\n", &x);
    return 0;
}
here we are passing the value to the fun function
but what if we want to pass the refference?
#include<stdio.h>
void fun(int* x){
    *x = 20;
    // printf("fun function er x er address: %p\n", &x);
}
int main(){
    int x = 45;
    fun(&x);
    printf("%d", x);
    // printf("main function er x er address: %p\n", &x);
    return 0;
}