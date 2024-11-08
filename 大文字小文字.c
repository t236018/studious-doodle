#include <stdio.h>

int main(void)
{
    int diff;
    char Large; //大文字
    char small; //小文字
    
    
    printf("アルファベットの小文字を入力してください＞＞＞" );
    
    scanf("%c",&small);
    diff='A'-'a';
    Large=small+diff;
    
    printf("小文字は%c 大文字は%c\n",small,Large);
    

    return 0;
}