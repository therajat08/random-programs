#include <stdio.h>

int main()
{
    char a[100];
    int count=0,i=0;
    printf("enter \n");
    scanf("%[^\n]s",a);

    printf("%s",a);

    if(a[0]==' ' )
    {
        count=0;
    }
    else
        count=1;

    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ' && a[i]!='\0')
        {
            count+=1;
        }
        i++;
    }
    printf("\n%d",count);
    return 0;
}
