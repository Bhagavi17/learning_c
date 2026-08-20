// Datatypes in C

#include <stdio.h>

int main()
{
    // char datatype
    // char ch1 = 'A', ch2 = '1', ch3 = '#';

    // printf("bytes = %d", sizeof(ch1));
    // ch4 = '5';
    // printf("ch4 = %c", ch4);

    int n1 = 1234;
    float n2 = 234.56;

    printf("n1 = %d", n1);
    printf("\nbytes = %zu", sizeof(n1));

    printf("\nn2 = %f", n2);
    printf("\nbytes = %zu", sizeof(n2));

    n1 = 10056;

    printf("\nn1 = %d", n1);

    return 0;
}