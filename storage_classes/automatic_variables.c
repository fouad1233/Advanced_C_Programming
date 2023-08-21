/*automatic variables is the same with local variables are stored in stack memory,
 These allocates memory automatically when the function is called and frees the memory automatically when the function is returned.
İt's possible to use auto keyword to declare automatic variables but it's not necessary because all local variables are automatic variables by default.
*/
//Examples:
#include <stdio.h>
int main(){
    auto int a = 10;
    printf("a = %d\n", a);
    return 0;
}
//or inside function
int func(){
    int a = 10;
    int b = 20;
    return a*b;
}