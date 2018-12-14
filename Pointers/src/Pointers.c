/*
 ============================================================================
 Name        : Pointers.c
 Author      : KHerman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* C basics - pointers
*  K. Herman
*/
#include <stdio.h>

int main()
{
    /* variables */
    int a, b;
    /* pointers */
    int *pa, *pb;

    /* above the variables and the pointers have random values !!! */
    /* below we set the values except the pointer *pb */
    a = 23;
    b = 4;
    pa = &a;    // here pointer *pa have a value of the address of the variable a;


    printf("---------- Basic variable  and pointers operations---------------\n\r");
    printf("The value of a = %d \n\r", a);
    printf("Address in the memory of the variable a = 0x%X \n\r",&a);
    printf("The value of the variable pointed by the pointer *pa = %d \n\r", *pa);
    printf("The value  of the pointer *pa = 0x%X (is an address) \n\r",pa);
    printf("The address  of the pointer *pa = 0x%X (is an address) \n\r",&pa);
    printf("\n");
    printf("The value of b = %d \n\r", b);
    printf("Address in the memory of the variable b = 0x%X \n\r",&b);
    printf("The value of the variable pointed by the pointer *pb = %d \n\r", *pb);
    printf("The value  of the pointer *pb = 0x%X (is an address) \n\r",pb);
    printf("The address  of the pointer *pb = 0x%X (is an address) \n\r",&pb);

    return 0;
}

