/*Lab Assignment 2
Question No.2
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int a=17;
    int b=-90;
    int c=12;
    printf("\n %d", (a>=b) && (a>=c)? a : (b>=a) && (b>=c)? b :(c>=a) && (c>=b)? c : (a=b=c));
    return 0;
}