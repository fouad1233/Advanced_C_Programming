// Header file for working with dates
//stdbool is a header file that defines the bool type and the true and false constants
#include <stdbool.h>

//Enemurated Types
//enum Kmonth is a new type that can only take on the values listed in the list
enum KMonth {January = 1, February, March, April, May,
             June, July, August, September, October, November, December};
enum KDay {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

typedef struct date{
    enum KMonth month;
    enum KDay day;
    int year;
}Date;


// Functions that work with dates
Date date_update(Date today);
int numberOfDays(Date d);
bool isLeapYear(Date d);

//Macro to set a date in a structure
#define setDate(s, mm, dd, yyyy) s = (Date) {mm, dd, yyyy}

// External variable reference
extern Date today;