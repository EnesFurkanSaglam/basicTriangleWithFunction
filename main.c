#include <stdio.h>
#include <stdlib.h>

void triangle(int number)
{
    int i;
    int j;
    for(i=0; i<number; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("X");
        }
        printf("\n");
    }

}
int main(void)
{
    triangle(4); // value is the side of a triangle
    return 0;
}
