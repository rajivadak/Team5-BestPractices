
#include "header.h"

int main()
{
    int a, b, optype, res;

    arithFuncPtr ptr[4];

    //ptr points to the function
    ptr[0] = add;
    ptr[1] = sub;
    ptr[2] = mul;
    ptr[3] = div;

    scanf("%i %i %i", &a, &b, &optype);

    res = (ptr[optype - 1])(a, b);

    printf("%i\n", res);

    return 0;
}
