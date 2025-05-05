#include<stdio.h>
int dbl_it(int n){
    return n*2;
}
int main(){
    int x = 10;
    int dbl = dbl_it(x);
    printf("%d", dbl);
    return 0;
}

// function is total 4 type.
//1. return + parameter
//2. return + no parameter
//3. no retrun + parameter
//4. no return + no parameter


//function symtax:
// return_type function_name(parameter)
//{
// return;
//}

// if we define the function after the main function we have to declare the function before the main funciton.