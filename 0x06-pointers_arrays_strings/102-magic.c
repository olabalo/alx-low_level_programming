#include <stdio.h>
int main(void) 
{
int a[] = {5, 7, 98, 1, 4};
int *p = &a[0];
printf("%s%d%s", "a[2] = ", *(p + 2), "\n")
return (0);
}
