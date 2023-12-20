//
// Created by 13584 on 2023/9/26.
//
#include <stdio.h>
#define G 6.674e-11
#define M 77.15
int main(){
    double gravity,m,R;
    scanf("%lg %lg",&m,&R);
    gravity=(G*M*m)/(R*R);
    printf("%.3le\n",gravity);

    return 0;

}