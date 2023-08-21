# Advanced_C_Programming

This repo contains c advanced topics on various topics, its purpose is to provide educational and useful content to people with codes collected from different sources.

All of the explanations of codes will be explained in readme

## using_header_files_effectively

This include functions that can update date, finding date of tomorrow etc.

This folder include 2 files, main.c and date.h

date.h include the functions prototypes,enumed variables and macro will be used in main.c

***First let's explain date.h***

`#include <stdbool.h>`

This include the stdbool library this library defines the bool type and the true and false constants

```
enum KMonth {January = 1, February, March, April, May,
             June, July, August, September, October, November, December};
enum KDay {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
```

*enum:* Codes the keywords to integers, in `January = 1` , 1 is the first element of coding and after this January keyword always equal to 1, but in KDay when no number is specified the coding start with `Sunday = 0`.

```
typedef struct date{
    enum KMonth month;
    enum KDay day;
    int year;
}Date;
```

Date is a data structure that include month as an object of Kmonth, day as an object of Kday, and  year as an integer.

```
Date date_update(Date today);
int numberOfDays(Date d);
bool isLeapYear(Date d);

```

Those are the prototypes of wrtied maked in the c file.

```
#define setDate(s, mm, dd, yyyy) s = (Date) {mm, dd, yyyy}
```

setDate is a macro function that can assign month day and year to the structure given.

`extern Date today;`

This block pf code is n example to extern a variable from the main script as an example main.c

***Secondly main.c***

`bool isLeapYear(Date d)` function return True if the year is leap false if not.

`int numberOfDays(Date d)` function return the number of days in the current month.

`Date date_update(Date today)` function using the previous functions return the date of tomorrow.


## storage_classes

### Automatic variables

Automatic variables is the same with local variables are stored in stack memory. These allocates memory automatically when the function is called and frees the memory automatically when the function is returned.It's possible to use auto keyword to declare automatic variables but it's not necessary because all local variables are automatic variables by default.

*Example usage with auto keyword:*

```
#include <stdio.h>
int main(){
    auto int a = 10;
    printf("a = %d\n", a);
    return 0;
}
```

### External variables

External variables are stored in data segment of memory, they are accessible from any function in the program. They are also called global variables. You can use `extern` keyword to get a global variable and use from other file. Please take a look to external_variables.c and external_variables1.c . They are initialized as 0.

### Static variables


Static variables are stored in data segment of memory not stack,they are accessible only from the function they are declared in. They have the property of preserving their value even after they are out of their scope. Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope!!

```
#include <stdio.h>
int counter(){
    static int count = 0;
    count++;
    return count;
}
int main(){
  
    printf("%d\n", counter());
    printf("%d\n", counter());
    printf("%d\n", counter());
    return 0;
}
```

In this code when we call counter function, count variable is initialized to 0 and incremented by 1 . And if you run the code like iIexplain before you can see clearly that count variable is not initialized again when we call counter function again and just increments. 

The static variables are initialized to 0 like global variables and they can only be initalized using constant literalse.
