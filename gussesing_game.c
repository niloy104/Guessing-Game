//Guessing Game by niloy104
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    srand(time(0)); //genarate random number
    int hidden = rand() % 100 + 1; //genarate random number
    // printf("%d\n", hidden); 

    int i = 1;// intialize gusseing limit

    while (1)
    {
        if (i > 10)
        {
            printf("Your Gueesing limit over!\n");
            break;
        }
        int gusses;
        scanf("%d", &gusses);

        if (hidden == gusses)
        {
            printf("You are right\n");
            break;
        }
        else if (hidden > gusses)
        {
            printf("Gusses smaller!\n");
        }
        else if (hidden < gusses)
        {
            printf("Gusses Larger!\n");
        }
        i++;
    }
}
