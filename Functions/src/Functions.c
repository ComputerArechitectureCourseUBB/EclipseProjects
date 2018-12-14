/*
 ============================================================================
 Name        : Functions.c
 Author      : KHerman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/* Examples HowTo implemet functions in C
*  K. Herman
*/
#include <stdio.h>

/* funcion declaracions */
void foo(void);
int Area(int width, int height);
void mean(int a, int b, float *c);

int main()
{
    int a, b, area;
    short x,y,z;
    float me;
    /* variables inicialization */
    a = 4;
    b = 6;
    x = 4;
    y = 3;
    me = 0;


    /* funcion invocations calls */
    /* no argumens no returned data */
    foo();
    /* two arguments passed by value and the result reurned by the function */
    area = Area(a,b);

    /* three arguments passed to a function  where two are passed by the value and the third one
    * is in fact the result updated by the fuction */
    mean(x,y,&me);

    printf("Area of the square is equal to = %d \n\r", area);
    printf("Mean value of %d  and %d is equal to %.2f \n\r",x,y,me);
    return 0;
}

/* funcion definitions */
void foo(void){
    printf("Estoy aqui en la funcion foo !\n\r");
}

/* In this function the results is returned by the function */
int Area(int width, int height){

    int result;
    result = width*height;
    return(result);
}

/* in this funcion the results is returned by the argument
* more precisly by a pointer to the argument what results
* the variable me in the main function is updated
*/
void mean(int a, int b, float *c){

    *c = (float) (a+b)/2;

}
