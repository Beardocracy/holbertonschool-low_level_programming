#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 4) = 98;
  	printf("Address of n   = %p\n", &n);
	printf("Address of p   = %p\n", p);
	printf("Address of &p  = %p\n", &p);
	printf("Address of a   = %p\n", a);
	printf("Adress of  &a  = %p\n", &a);
	printf("*(p + 5) = %d\n", *(p + 5));
	printf("*(p + 6) = %d\n", *(p + 6));
	printf("*(p + 7) = %d\n", *(p + 7));
	printf("*(p + 8) = %d\n", *(p + 8));
			
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
