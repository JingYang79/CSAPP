#include<stdio.h>

double average(double *array);/*函数声明*/
void main()
{
    double score[10]={82,100,55,80,64,78,26,65,36,85},result;
    result=average(&score);
    printf("%lf\n",result);
}

double average(double *array)
{
    int i;
    double f=0;
    for(i=0;i<=9;i++)
    {
        f+=(*(array+i));
        printf("%f\n", f);
    }
    f /= 10;
    return (f);
}
