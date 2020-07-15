//Listing 15_2 Determining the sizes of elements in an array

#include <stdio.h>

int multi[2][4];
int testint = 2;

int main(void)
{
    printf("\nthe size of testint = %p", sizeof(&testint));
    printf("\nthe value of testint = %p", testint);
    printf("\nthe size of multi[1][3] = %p\n", sizeof(&multi[1][3]));
    printf("\nthe size of multi = %d", sizeof(multi));
    printf("\nthe size of multi[0] = %d", sizeof(multi[0]));
    printf("\nthe size of multi[0][0] = %d\n", sizeof(&multi[0][0]));

    return 0;
}
