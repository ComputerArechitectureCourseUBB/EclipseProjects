/* C basics
*  K. Herman
*/
#include <stdio.h>



int main()
{
    int a, b;
    short x,y,z;
    float real, real2;
    char s;
    
    a = 23;
    b = 4;
    
    printf("----------Basic variable operations---------------\n\r");
    printf("The value of a = %d \n\r", a);
    printf("The value of a in hex = 0x%x \n\r", a);
    printf("The value of b = %d \n\r", b);
    printf("The value of b in hex = 0x%x \n\r", b);
    printf("Size in bytes of the variable a = %d \n\r", sizeof(a));
    printf("Address in the memory of the variable a = 0x%X \n\r",&a);
    
    printf("----------Operations vith fractional numbers---------------\n\r");
    real =  (a+b)/2; 
    printf("The value of the variable  real = %.2f \n\r", real);
    /* static cast ! (int + int )/2 can be a real, fractional value like 13.5.
    * Operation (float) tells the compiler not to truncate the fractional part
    */
    real2 = (float) (a+b)/2;   
    printf("The value of the variable  real2 with static cast = %.2f \n\r", real2);
    
    return 0;
}

