/*
Static variables are stored in data segment of memory not stack, they are accessible only from the function they are declared in
They have the property of preserving their value even after they are out of their scope
Hence, static variables preserve their previous value in their previous scope 
and are not initialized again in the new scope!!
*/
//Examples:
#include <stdio.h>
int counter(){
    static int count = 0;
    count++;
    return count;
}
int main(){
    //when we call counter function, count variable is initialized to 0 and incremented by 1
    //you can see clearly that count variable is not initialized again when we call counter function again
    printf("%d\n", counter());
    printf("%d\n", counter());
    printf("%d\n", counter());
    return 0;
}