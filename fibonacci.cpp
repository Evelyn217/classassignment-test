#include <stdio.h>
int main()
{
int a = 1;
printf("%d ", a);
int b = 1;
printf("%d ", b);
int i, temp;
for(i=1;;i++)
 {

    temp = b;
    b += a;
    a = temp;
    if(b<200)
        printf("%d ", b);

    else
        break;
 }
}
