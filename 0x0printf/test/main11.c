#include "holberton.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>

int main(void)
{
/*	int i;
 */
	int n = 0;
	int m = 0;
/*	unsigned int i;
 */
	/* Reverse String Test */
	n = printf(" Printf string: %s\n", "Hello World!!!!!");
	m = _printf("_Printf string: %R\n", "Hello World!!!!!");
	printf("%d : %d\n", n, m);



	/* Test for difference with chars */
/*	for (i = 250; i < 260; i++)
	{
		n = printf(" printf of ascii[%d]: %c\n", i, i);
		m = _printf("_printf of ascii[%d]: %c\n", i, i);
		printf("%d : %d\n", n, m);
	}
*/
	/* Tests for how it handles strings */
/*	n = printf(" PRINTF: %s\n", NULL);
	m = _printf("_PRINTF: %s\n", NULL);
	printf("%d : %d\n", n, m);
*/
	/* Test for Binary */
/*	m = _printf("[%d] -> Binary: %b\n", 0, 0);
	_printf("%d\n", m);
*/
	/* Tests for % */
/*	n = printf("%");
	m = _printf("%");
	printf("%d : %d\n", n, m);
*/	
	/* Test that shows printf with undefined behavior, while ours prints the
	 * same every time. */
/*	n = printf("Hello %sWorld!%\n");
	m = _printf("Hello %sWorld!%\n");
	printf("%d : %d\n", n, m);
	*/

	/* Testing for % signs */
/*	printf("Foo%%%%s\n");
 */



/*	n = _printf("UINT_MAX in binary is: %b\n", UINT_MAX);
	printf("Count of previous line: %d\n", n);
	n = _printf("%d in binary is: %b\n", 17, 17);
	_printf("Count of previous line: %d\n", n);
	n = _printf("%d in binary is: %b\n", 10, 10);
	_printf("Count of previous line: %d\n", n);
	n = _printf("%d in binary is: %b\n", 1, 1);
	_printf("Count of previous line: %d\n", n);
	for (i = 31; i >= 0 && i <= 31; i--)
	{
		printf("2 to the power of %u is %u\n", i, u_pow(2, i));
	}
	*/

/*	_printf("2 to the power of %d is %d\n", 0, _pow(2, 0));
	_printf("2 to the power of %d is %d\n", 1, _pow(2, 1));
	_printf("2 to the power of %d is %d\n", 2, _pow(2, 2));
	_printf("2 to the power of %d is %d\n", 3, _pow(2, 3));
	_printf("2 to the power of %d is %d\n", 4, _pow(2, 4));   */
	return 0;
}
