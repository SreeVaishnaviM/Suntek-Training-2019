\gcd of 2 no\
#include <stdio.h>

#include<string.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0) 
    return a;
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    return gcd(a,b-a);
    
}
int main()
{
    int a=10,b=25;
    printf("gcd of %d and %d is =%d",a,b,gcd(a,b));
    return 0;
}
