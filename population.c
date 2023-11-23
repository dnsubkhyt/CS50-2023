#include <stdio.h>
#include <cs50.h>

int get_size (void);
int main (void)
{
    int n=get_size();
}
int get_size (void)
{
    int n = get_int("population: ");
    int i;
    for ( i=0; n<= 200 ; i++)
    {
        n=n+n/3-n/4;
    }
    printf("%i years will take \n", i);
    return 0;
 }

