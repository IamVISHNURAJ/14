#include <stdio.h>
int main()
{
 int i,n,m;
    scanf("%d", &n,&m);
    if(n%2==0)
    {
      n++;
    }
    for(i=n; i<=m; i+=2)
    {
        printf("%d\n", i);
    }
    return 0;
}