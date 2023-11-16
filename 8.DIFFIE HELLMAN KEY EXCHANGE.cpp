#include <stdio.h>

int power(int a, int b, int mod)
{
    int t;
    if (b == 1)
        return a;
    t = power(a, b / 2, mod);
    if (b % 2 == 0)
        return (t * t) % mod;
    else
        return (((t * t) % mod) * a) % mod;
}

int main()
{
    int n, g, x, a, y, b;
    printf("Enter the value of n and g: ");
    scanf("%d %d", &n, &g);
    printf("Enter the value of x for the first person: ");
    scanf("%d", &x);
    a = power(g, x, n);
    printf("Enter the value of y for the second person: ");
    scanf("%d", &y);
    b = power(g, y, n);
    int key1 = power(b, x, n);
    int key2 = power(a, y, n);
    printf("Key for the first person is: %d\n", key1);
    printf("Key for the second person is: %d\n", key2);
    return 0;
}

