#include "date.h"
#include <stdio.h>

//Function to calculate tommorow's date
Date date_update(Date today){
    Date tomorrow;
    if(today.day != numberOfDays(today)){
        tomorrow = (Date) {today.month, today.day + 1, today.year};
    }else if(today.month == December){
        tomorrow = (Date) {January, 1, today.year + 1};
    }else{
        tomorrow = (Date) {today.month + 1, 1, today.year};
    }
    
    return tomorrow;
}
int numberOfDays(Date today){
    int days;
    bool isLeapYear(Date d);
    const int daysPerMonth[12] = {31, isLeapYear(today) ? 29 : 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};
    
    if(today.month == February){
        days = isLeapYear(today) ? 29 : 28;
    }else{
        days = daysPerMonth[today.month - 1];
    }
    
    return days;
}
bool isLeapYear(Date d){
    bool leapYearFlag;
    
    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0){
        leapYearFlag = true;
    }else{
        leapYearFlag = false;
    }
    
    return leapYearFlag;
}
int main(){
    Date today;
    Date tommorrow;
    setDate(today,August, 21, 2023);
    tommorrow = date_update(today);
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);
    printf("Tomorrow's date is %i/%i/%.2i.\n", tommorrow.month, tommorrow.day, tommorrow.year % 100);
    return 0;
}