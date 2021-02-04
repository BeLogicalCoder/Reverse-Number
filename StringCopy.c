#include<stdio.h>

void StrCpy(char src[],char Dest[])
{
    int i=0;
    if(src==0 || Dest==0)
    {
        return;
    }

    while (src[i]!=0)
    {
        Dest[i]=src[i];
        i++;
    }

    Dest[i]='\0';
}


int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    printf("Please Enter the String\n");
    scanf("%[^\n]s",arr);

    StrCpy(arr,brr);
    
 printf("String after copy  %s\n",brr);

 return 0;


}