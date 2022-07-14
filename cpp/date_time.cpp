#include <ctime>
#include <cstdio>
#include <iostream>


int main() {
    //Current date and time based on current system
    time_t now = time(0);

    //convert now to string form
    char* dt = ctime(&now);
    printf("local date and time is: " );
    printf(dt);


    //convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    printf("The UTC date and time is: ");
    printf(dt);

    //Format time with struct tm

    tm *ltm = localtime(&now);
    printf("Year: %d\n", ltm->tm_year + 1900);
    printf("Month: %d\n", ltm->tm_mon);
    printf("Day: %d\n", ltm->tm_mday);
    printf("Time (h): %d\n", ltm->tm_hour);
    printf("Time (m): %d\n", ltm->tm_min);
    printf("Time(s): %d\n", ltm->tm_sec);
    //printf("Year: " + 1900+ltm->tm_year);
    



    return 0;


}

