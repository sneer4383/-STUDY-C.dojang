#include <stdio.h>

int main()
{
    char c1, c2, c3;
    c1 = c3 = '\t';
    c2 = '\n';
    
    printf("Hello%cworld%cHello%cWorld\n", c1, c2, c3);
    return 0;
}