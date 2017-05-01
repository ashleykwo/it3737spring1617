#include <stdio.h>

int main()
{
    int num=123;
    int sum=0; // zeroing out accumulator
    
    // doing destructive overwrite
    sum=sum+num;
    sum=sum+num; // double value
    
    // print format for sum
    printf("%d\n\r", sum);
    
    return 0;
}