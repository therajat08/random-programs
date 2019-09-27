#include <stdio.h>

int main()
{
    char str[100];
    char toSearch[100];

    int count=0;
    int i,j,found;
    int stringLen,searchLen;

    printf("enter \n");
    scanf("%[^\n]s",str);
    scanf("%s",toSearch);

    stringLen = strlen(str);
    searchLen = strlen(toSearch);

    for(i=0;i<=stringLen-searchLen;i++)
    {
        found = 1;
        for(j=0;j<searchLen;j++)
        {

            if(str[i+j]!=toSearch[j])
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            count++;

        }
    }
    printf("%d",count);
    return 0;
}

