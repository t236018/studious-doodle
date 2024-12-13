*******************************************************************************/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    int has_upper=0,has_lower=0,has_digit=0;
    int length;
    
    printf("文字列を入力してください");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    
    length=strlen(str);
    
    if(length<8){
        printf("8文字に満たしていません\n");
        return 0;
    }
    
    for(int i=0;i<length;i++){
        if(isupper(str[i])){
            has_upper=1;
        }else if(islower(str[i])){
            has_lower=1;
        }else if(isdigit(str[i])){
            has_digit=1;
        
        }
        
        }
    if (!has_upper){
        printf("大文字がありません\n");
    if(!has_lower){
        printf("小文字がありません\n");
        }
    if(!has_digit){
        printf("数字がありません\n");
    }
    if(has_upper&&has_digit&&has_lower){
        printf("入力された文字列は条件を満たしています\n");
    }else{
        printf("入力された文字列は条件を満たしていません\n");
    }}
return 0;
}