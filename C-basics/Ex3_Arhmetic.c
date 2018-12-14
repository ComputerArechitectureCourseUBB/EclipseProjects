/* C basics - arthmetic and bolean operations
*  K. Herman
*/
#include <stdio.h>

int main()
{
    int a, b, c;  

    a = 2;
    b = 4;
    c = 0;
    
    printf("The values of the variables a = %d, b = %d, c = %d \n\r", a,b,c);
    c = a + b ;
    printf("The sum of the variables a = %d, b = %d is equal c = %d \n\r", a,b,c);
    c = a - b ;
    printf("The difference of the variables a = %d, b = %d is equal c = %d \n\r", a,b,c);
    c = a * b ;
    printf("The product of the variables a = %d, b = %d is equal c = %d \n\r", a,b,c);
    c = b / a ;
    printf("The quotinent of the variables a = %d, b = %d is equal c = %d \n\r", a,b,c);
    c = b%a;
    printf("The modulo of the variables b= %d modulo a = %d is equal c = %d \n\r", b,a,c);
    c = a << 2 ;
    printf("The double left shift of the variables a = %d, is equal c = %d \n\r", a,c);
    c = b >> 1 ;
    printf("The right shift of the variables b= %d, is equal c = %d \n\r",b,c);
    c = a | b;
    printf("The logical OR of the variables a = 0x%X and b = 0x%X is equal c = 0x%X \n\r",a,b,c);
    c = a & b;
    printf("The logical AND of the variables a = 0x%X and b = 0x%X is equal c = 0x%X \n\r",a,b,c);
    c = a ^ b;
    printf("The logical XOR of the variables a = 0x%X and b = 0x%X is equal c = 0x%X \n\r",a,b,c);
    c = ~a;
    printf("The logical NOT of the variables a = 0x%X is equal c = 0x%X \n\r",a,c);
    return 0;
}
/*  printf FORMATING CODES
code	type	format
------------------------------------------
d	int	decimal (base ten) number
o	int	octal number (no leading '0' supplied in printf)
x or X	int	hexadecimal number (no leading '0x' supplied in printf; accepted if present in scanf) (for printf, 'X' makes it use upper case for the digits ABCDEF)
ld	long	decimal number ('l' can be applied to any of the above to change the type from 'int' to 'long')
u	unsigned	decimal number
lu	unsigned long	decimal number
c	char [footnote]	single character
s	char pointer	string
f	float [footnote]	number with six digits of precision
g	float [footnote]	number with up to six digits of precision
e	float [footnote]	number with up to six digits of precision, scientific notation
lf	double [footnote]	number with six digits of precision
lg	double [footnote]	number with up to six digits of precision
le	double [footnote]	number with up to six digits of precision, scientific notation
*/
