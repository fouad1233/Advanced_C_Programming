# Advanced_C_Programming

This repo contains c advanced topics on various topics, its purpose is to provide educational and useful content to people with codes collected from different sources.

All of the explanations of codes will be explained in readme

### using_header_files_effectively

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

`Date date_update(Date today)` function using the previous functions return the date of tommorrow.
