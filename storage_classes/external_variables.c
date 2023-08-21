#include <stdio.h>
#include "external_variables1.c"
//external variables are stored in data segment of memory, they are accessible from any function in the program
//They are global variables
extern int x;
void function(){
    
    printf("x = %d\n", x);
}
int main(){
    function();
    x = 30;
    printf("x = %d\n", x);
    return 0;
}
