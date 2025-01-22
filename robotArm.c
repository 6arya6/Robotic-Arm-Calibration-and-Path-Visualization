/* 
   Author:           Arya Amin
   Student Number:   10633675
   Lab Section:      L1O
   Email:            aamin04@student.ubc.ca
           
   Purpose:          This program gives the coordinates of point C of the robot arm
   Input:            length of arm AB, lentgh of arm BC, angle1, and angle2
   Output:           x and y coordinates of point C
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double AB;
    double BC;
    double angle1;
    double angle2;
    double x;
    double y;

    printf("Enter length of AB (in metres): \n");
    scanf("%lf", &AB);

    printf("Enter length of BC (in metres): \n");
    scanf("%lf", &BC);

    printf("Enter angle made by AB with +x axis (in radians)");
    scanf("%lf", &angle1);


    printf("Enter angle made by BC with +x axis (in radians)");
    scanf("%lf", &angle2);

    x = AB * cos(angle1) + BC * cos(angle2);
    y = AB * sin(angle1) + BC * sin(angle2);

    printf("%lf, %lf", x, y);
    
    system("pause");
    return 0;
}