#include <stdio.h>
#include "add_minus.h"
int main(void)
{
    int rst;
    printf("Hello Cacu!\n");
    rst = add(3,2);
    printf("3 + 2 = %d\n",rst);
    rst = minus(3,2);
    printf("3 - 2 = %d\n",rst);
    return 0;
}