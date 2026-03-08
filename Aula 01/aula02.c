#include <stdio.h>

int main(void) {
	unsigned char j = 255;
	j =  j + 10;
	printf("%u\n", j); /* 9 */

	char i = 124;
	i = i + 10;
	printf("%uz\n", i); /* 4292967177 */

	/* char  b = 1000; erro >>>  aula02.c: In function ‘main’:
aula02.c:12:19: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘1000’ to ‘-24’ [-Woverflow]
   12 |         char  b = 1000;
      |                   ^~~~*/
	char z;
	z = 200;
	printf("%c\n", z);
	z +=200;
	printf("%c\n", z);
}
