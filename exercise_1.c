#include <stdio.h>
#include <stdlib.h>

int main()
{
    //it does the thing
    int first_value, sec_value; printf("Enter 2 numbers: "); 
    scanf("%d %d", &first_value, &sec_value);
    printf("%d\n%d\n%d\n%d\n%d",first_value + sec_value, first_value - sec_value,first_value * sec_value, first_value/sec_value, first_value%sec_value);
    return 0;

}