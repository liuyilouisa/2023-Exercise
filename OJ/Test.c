//
// Created by 13584 on 2023/9/26.
//
#include <stdio.h>

int main() {
    int day,year,hour,minute,second;
    char weekday[10],month[10];
    scanf("%s %d %d %s %d %d %d",&month,&day,&year,&weekday,&hour,&minute,&second);

    printf("%.3s %.3s %2.2d %2.2d:%2.2d:%2.2d %4.4d\n",weekday,month,day,hour,minute,second,year);
    return 0;
}