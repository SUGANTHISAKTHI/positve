#include<stdio.h>
int main()
{
 long long n;
int i,count=0;
scanf("%lld",&n);
while(n!=0)
{
    n=n/10;
count++;
}
printf("the count is %d",count);
}
