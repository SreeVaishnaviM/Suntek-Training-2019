#include<stdio.h>
int main()
{
    char s[100],a;
    int i,f=0;
    printf("enter string:");
    gets(s);
    printf("enter character:");
    scanf("%c",&a);
    for(i=0;s[i]!='\0';i++)
    {
        if(a==s[i])
        {
            f++;
        }
    }
    printf("frequency of %c=%d",a,f);
    
return 0;
}