#include <stdio.h>
#include <stdlib.h>

long long a[200],i,j,k,l,m,n;

int com(const void *xx, const void *yy)
{
if(*(long long *)xx > *(long long*)yy) return -1;
return 1;
}

int main()
{

scanf("%lld %lld\n",&n,&k);
for(i=0;i<n;i++) scanf("%lld",a+i);

qsort(a,n,sizeof(a[0]),com);

m = 0;

for(i=0;i<n;i++) m+= a[i]*(1+i/k);

printf("%lld\n",m);


return 0;
}