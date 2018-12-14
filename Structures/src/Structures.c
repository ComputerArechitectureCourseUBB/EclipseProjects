/*
 ============================================================================
 Name        : Structures.c
 Author      : KHerman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* C basics - structures
*  structure concept
*  structure members access methods
*  structure size
*  K. Herman
*/
#include <stdio.h>

/* Structures are used to create objects that have some members of diferent types (usually basic types)
*  The structure is used to describe objects in an elegant form.
*/
typedef struct {
    short width;
    short height;
    int area;
    int circumference;
} Rectangle;

// function declarations
void CalculateArea(Rectangle *rect);
void CalculateCircumference(Rectangle *rect);

int main()
{
    Rectangle  rect1;     // variable type rectangle
    Rectangle  *prect1;   // pointer type rectangle

    // below the access to the structure members is presented
    // the rule is: NameOfTheStructure.member
    rect1.width = 3;
    rect1.height = 4;

    prect1 = &rect1;    // now the pointer takes the address of the rect1 variable


    printf("The value of the  member width in the structure rect1 = %d \n\r", rect1.width);
    printf("The value of the  member height in the structure rect1 = %d \n\r", rect1.height);
    printf("The address of the  structure  rect1 = 0x%X \n\r", &rect1);
    // here the size is the sum of the structure members
    printf("The size of the structure in bytes  = %d \n\r", sizeof(rect1));

    // here we pass the address of the structure rect1 using operator &
    CalculateArea(&rect1);
    printf("The value of the member area of the structure rect1 = %d \n\r", rect1.area);

    // here we pass the address of the structure rect1 using pointer
    CalculateCircumference(prect1);
    printf("The value of the member circumference of the structure rect1 = %d \n\r", prect1->circumference);
    return 0;
}

// functions definitions
void CalculateArea(Rectangle *rect){
    // here the access to the members of the structures is made by the operator ->
    // it is used in case of pointers
    rect->area = rect->width*rect->height;

}

void CalculateCircumference(Rectangle *rect){

    rect->circumference = 2*rect->width + 2*rect->height;

}
