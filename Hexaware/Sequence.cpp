#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k;
    float n, s1, s2;
    scanf("%d %d %d", &i, &j, &k);
    n = abs(j-i)+1;
    s1 = (n/2)*(2*i+(n-1));
    n = abs(k-(j-1))+1;
    s2 = (n/2)*(2*(j-1)-(n-1));
    printf("%d",(int)(s1+s2));
    return 0;
}