#include <stdio.h>

int main(void)
{
    int k,l;
    printf("数字二つ入れて");
    scanf("%d %d",&k,&l);
    
    if(k>l)
    {
        printf("The first one is biggggg");
    }
    else if(k<l)
    {
        printf("The first one is small!!!!!!!!");
     
    }
    else
    {
        printf("It is similar");
    }
    
    return 0;
}