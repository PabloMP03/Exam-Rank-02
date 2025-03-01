#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   int nbr1 = atoi(argv[1]);
   int nbr2 = atoi(argv[2]);

   if(argc == 3)
   {
    if(nbr1 > 0 && nbr2 > 0)
    {
        while(nbr2)
        {
            int temp = nbr2;
            nbr2 = nbr1 % nbr2;
            nbr1 = temp;
        }
        printf("%d", nbr1);
    }
   }
   printf("\n");
   return(0);
}