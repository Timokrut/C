# include <stdio.h>

double min(double a, double b){
    if (a < b)
    return a;
    else 
    return b;
}

int abs(int x){
    if (x < 0)
    x *= (-1);

    return x;
}

int topow(int x, int power)
{
    int result = 1;
    for (int i = 0; i <= power; i++)
    {
        result *= x;
    }
    return(result);
}



