/*Lab Assignment 2
Question No.4
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year:", a);
    scanf("%d", &a);
    if ((a%4 ==0) && (a%100 !=0) && (a%400))
    printf("It is a leap year");
    else printf("It is not a leap year");
    return 0;
}