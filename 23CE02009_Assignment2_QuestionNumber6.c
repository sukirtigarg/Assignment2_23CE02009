/*Lab Assignment 2
Question No.6
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int a;
    char b[]="The number is odd";
    char c[]="The number is not odd";
    char d[]="The number is not within the range";
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("%s", a<100 || a>200 ? d : a%2 != 0 ? b : c );
    return 0; 
}