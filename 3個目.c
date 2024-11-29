#include <math.h>
#include <stdio.h>

int main(void)
{
    int i=1;//変数iへ最小値の１を代入する
    printf("      逆数 　    2乗  平方根\n");
    printf("------------------\n");
    
    while(i<=10)//iが１０以下の間繰り返す
    {
        double value =i;//実数計算するのでiを実数化しvalueにセット
        double a =1;
        double b =value*value;
        double c =sqrt(value);
        printf("%5.1f  %5.3f  %6.1f  %6.4f\n ",value,a,b,c);
        i=i+1;//変数iをカウントアップアップ
    }

    return 0;
}