#include <stdio.h>

int main(void)
{
    int Taro,Hanako,Jiro;
    
    Taro=20;
    Hanako=50;
    Jiro=20;
    
    
    if(Taro==20)
    printf("太郎は成人です\n");
    
    if(Hanako !=0)
    printf("花子は成人ではありません。\n");
    
    if(Hanako>=20)
    printf("花子は成人以上です\n");

    
    if(Taro<20)
    printf("次郎は成人ではありません。\n");
    
    if(Taro>Jiro)
    printf("太郎は次郎より年寄りです\n");
    
    if(Hanako>Taro)
    printf("花子は次郎より年寄りです\n");
    
    return 0;
}