/************************************************************************************************
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. 
      Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Input - a string hh:mm:ssAM or hh:mm:ssPM (01 <= hh <= 12; 00 <= mm, ss <= 59)
Output - hh:mm:ss (00 <= hh <= 23)
                                    -HackerRank
************************************************************************************************/

#include <stdio.h>

int main() {

    char time[10];
    scanf("%s", time);

    int hh, mm, ss;

    hh = (time[0]-'0') * 10 + (time[1]-'0');   //"12" -> 12, "05" -> 5
    mm = (time[3]-'0') * 10 + (time[4]-'0');
    ss = (time[6]-'0') * 10 + (time[7]-'0');

    if(hh < 12 && time[8] == 'P')      //07:05:45PM -> 19:05:45, 12:45:54PM -> 12:45:54
        hh += 12;

    else if(hh == 12 && time[8] == 'A')   //12:00:00AM -> 00:00:00
        hh = 0;

    printf("%02d:%02d:%02d", hh, mm, ss);  //00:00:00, 01:02:03, 11:22:33

    return 0;
}
