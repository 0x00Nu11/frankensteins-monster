#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int max_hops=0;
    int starting_n=1;
    for (size_t i = 1; i < 1000000; i++)
    {   
        long x=i;
        int hops=0;
        while (x!=1)
        {
            if (x%2==0)
            {
                x=x/2;
            }
            else
            {
                x=(3*x)+1;
            }
            hops+=1;
        }
        if (hops>max_hops)
        {
            max_hops=hops;
            starting_n=i;
        }
    }
    printf("longest sequence starts at %d, with %d hops.", starting_n, max_hops);
    return 0;
}
