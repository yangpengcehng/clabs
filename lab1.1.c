#include <stdio.h>
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 5;
    celsius = lower;
    while (celsius <= upper) 
    {    
        fahr = celsius * 9 / 5 +32;
        printf("%d\t%d\n",celsius, fahr);
        celsius = celsius +  step;
    }
}
