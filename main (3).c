#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    int l, l1, l2, i, j, found=0, not_found=0;
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    l1 = strlen(a);
    l2 = strlen(b);
    if(l1 == l2)
    {
        l = l1;
        for(i=0; i<l; i++)
        {
            found = 0;
            for(j=0; j<l; j++)
            {
                if(a[i] == b[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
            printf("Strings are not Anagram");
        else
            printf("Strings are Anagram");
    }
    else
 printf("both strings must contain equal no of characters");
    return 0;
}