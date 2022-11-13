#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int a;
    int z;
    do
    {
        x = get_int("Height: ");
    }
    while (x < 1 || x > 8);

    //Rows needed for pyramid
    for (y = 0; y < x; y++)
    {
        //To reverse pyramid, add spaces
        for (z = 0; z < x - y - 1; z++)
        {
            printf(" ");
        }
        //Columns for pyramid
        for (a = 0; a <= y; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
