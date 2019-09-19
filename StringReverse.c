#include <stdio.h>
#include <stdlib.h>

void rev(char *str)
{
    char *end = str;
    char temp;

    if(str)
    {
        while(*end)
        {
            ++end;
        }

    --end;

    while(str<end)
    {
        temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
    }
}

int main()
{
    char s[100];

   printf("Enter a string\n");
   gets(s);

   rev(s);

   printf("Reverse of the string is \"%s\".\n", s);

   return 0;

}
