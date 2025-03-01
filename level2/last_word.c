#include <unistd.h>

int main(int argc, char** argv)
{
    int i = 0;
    char *lw;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] <= 32 && argv[1][i + 1] > 32)
                lw = &argv[1][i + 1];
            i++;
        }
        i = 0;
        while(lw && lw[i] > 32)
        {
            write(1, &lw[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}