
#include <stdio.h>

int gcd(int m, int x)
{
    long long a = m;
    long long b = x;
    long long r;

    if (a < 0)
    {
        a = -a;
    }

    if (b < 0)
    {
        b = -b;
    }

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return (int)a;
}

int main(void)
{
    int input_number;
    int result;
    int limit = 9966990;

    scanf("%d", &input_number);

    if (input_number > limit)
    {
        printf("NG");
        return 0;
    }

    result = gcd(limit, input_number);

    printf("%d", result);

    return 0;
}
