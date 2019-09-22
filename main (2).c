/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int a,b;
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
        printf("enter no:");
        scanf("%d%d",&a,&b);
        printf("%d\n",gcd(a,b));
        return 0;
       
    }

