/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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