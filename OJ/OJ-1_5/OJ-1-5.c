//
// Created by 13584 on 2023/9/26.
//
#include <stdio.h>

int main(){
    int a,y,m,JDN;
    int year,month,day;
    int i,j,k,l;
    scanf("%d %d %d",&year,&month,&day);
    a=(14-month)/12;
    y=year+4800-a;
    m=month+12*a-3;
    i=(153*m+2)/5;
    j=y/4;
    k=y/100;
    l=y/400;
    JDN=day+i+365*y+j-k+l-32045;
    if(1900<=year && year<=2599)
        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(1<=day && day<=31)
                printf("%d\n",JDN);
            break;
        case 4: case 6: case 9: case 11:
            if(1<=day && day<=30)
                printf("%d\n",JDN);
            break;
        case 2:
            if(year%4==0){
                if(1<=day && day<=29)
                    printf("%d\n",JDN);
            } else{
                if(1<=day && day<= 28)
                    printf("%d\n",JDN);
            }break;
            default:break;
        }

    return 0;
}