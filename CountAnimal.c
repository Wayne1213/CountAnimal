#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please input the number of head: ");
    int x = get_int();
    printf("Please input the number of foot: ");
    int y = get_int();

    int c, r; //c = chicken, r = rabbit
    for (c = 1; c < x; c++)  //x = c + r
    {
        r = x - c;
        //2c + 4r = y
        if (y == 2*c + 4*r)
        {
            printf(" Chicken: %i\n Rabbit: %i\n", c, r);
        }

    }


}