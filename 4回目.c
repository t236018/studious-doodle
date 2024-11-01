#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    printf("double型の最大値:%Lg\n",LDBL_MAX);
    printf("double型の最小値:%Lg\n",LDBL_MIN);
    printf("double型の精度:%d\n", LDBL_DIG);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値:%d\n",INT_MIN);
    return 0;
}