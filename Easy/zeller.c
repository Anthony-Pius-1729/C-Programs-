#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void Error(){
     printf("Invalid date. Please, try again");
}

int main () {

    printf("Enter Date [Year month day] \n");
    int year;
    int month;
    int day;
    int j;
    int k;
    
    scanf("%d %d %d", &year, &month, &day);
    const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int maxDays = daysInMonth[month];
    if (month == 2 && isLeap) {
        maxDays = 29; 
    }

    if (day < 1 || day > maxDays){
        Error();
        return EXIT_FAILURE;
    }
    if (month == 1 || month == 2 ){
        month += 12;
        year -= 1;
    }
    
    printf("Enter End Year \n");
    int endYear;
    scanf("%d", &endYear);

    j = year/100;
    k = year % 100;

    long dayIndex;
    dayIndex = (day + (long)floor((13.0 * (month + 1)) / 5.0) + k + (long)floor(k / 4.0) + (long)floor(j / 4.0) + 5 * j);
    int idx = (int)(dayIndex % 7);
    int safeIdx =  idx;
    // printf("Day index is %ld \n", dayIndex);
    const char* days[] = {
    "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
    };

    if (idx >= 0 && idx < 7) {
        printf("It's a %s\n", days[idx]);
    } else {
        printf("Some Internal Error occurred\n");
    }
   
    int sameCount = 0;

    for(int i = year+2; i < endYear+1; i++ ){
        j = i/100;
        k = i % 100;
        long dayIndices;
        dayIndices = (day + (long)floor((13.0 * (month + 1)) / 5.0) + k + (long)floor(k / 4.0) + (long)floor(j / 4.0) + 5 * j);
        int index = (int)(dayIndices % 7);
        if (index == safeIdx){
            ++sameCount;
        }
    }
    printf("Same day-and-month on same weekday between %d and %d: %d \n", year+1, endYear, sameCount);




}