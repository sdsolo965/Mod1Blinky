#include <stdio.h>

void multBy2(int *var2)
{
    *var2 = *var2 * 2;

}

int practice()
{
    ///Pointers
    int var1;
    printf("The address of var1 is %x \n", &var1);

    int var3 = 10;
    multBy2(&var1);
    printf("var1 = %d \n", var1);

    ///Data types and variables
    float x = 12.345678;
    printf("The value of x is %0.5f \n", x);
    
    return 0;
}

int main(int argc, char *argv[])
{
    printf("connected\n");

    practice();

    return 0;
}
