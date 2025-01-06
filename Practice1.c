// Q:- write a C program to calculate area of rectangle:
   // a :- Using hard coded inputs.
    //  b:- Using inputs supplied by  the user.
#include <stdio.h>

int main (){
    // int length =3;
    // int breadth =6;
    int  length , breadth;
    printf("Enetr length \n");
    scanf("%d",&length);
    printf("Enetr breadth \n");
    scanf("%d",&breadth);


    printf("The area of this rectangle is  %d", length
    *breadth);
    return 0;
}