// C program that demonstrates accessing the address of a
// register is invalid
#include <stdio.h>

/*
void test1(){
    //Creating a register variable and accessing its address
    //is invalid because register variables are stored in CPU
    //Compiler will throw an error : error: address of register variable requested
    register int i = 10;
    int* a = &i;
    printf("%d", *a);
    

}
*/
void test2(){
    int j = 19;
    register int* a = &j;
    printf("%d", *a);
    
}
int main()
{
    test2();
    return 0;
}

