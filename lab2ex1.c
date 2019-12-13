#include <stdio.h>
int main()
{
    unsigned int x, b;
    unsigned int m = 1;
    x = 1;         
    b = 0;  
    while (x != 0) 
    {
        x <<= 1;
        ++b;
    } 
    while (m>0)
    {
        m++;
    }
    printf("bit of max number:%d\n", b);
    printf("max number:%u\n", m-1);
}

    © 2019 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
    Help

