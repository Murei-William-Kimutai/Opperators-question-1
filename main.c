#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = 8;

    float d = c / (float)b * a;

    printf("%d / %d * %d= %f\n", c, b, a, d);
    return 0;

}
