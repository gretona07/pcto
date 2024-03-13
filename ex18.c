#include <stdio.h>

void saluto()
{
    printf("ciao Marco");
}

int main()
{
    int a =0;

    while(a <=80)
    {
        saluto();
        a = a + 1;
    }
}
