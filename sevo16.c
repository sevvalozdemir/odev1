#include <stdio.h>
long int fakt(int s);

int main()
{
    int s;
    printf("pozitif bir tamsayi girin: ");
    scanf("%d", &s);
    printf("%d Faktoriyeli = %ld", s, fakt(s));
    return 0;
}
long int fakt(int s)
{
    if (s >= 1)
        return s*fakt(s-1);
    else
        return 1;
}
